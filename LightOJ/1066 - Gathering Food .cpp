#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=15;
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side

struct pos {
    char ch;
    int x,y;
    pos(char c,int i,int j) {
        ch=c,x=i,y=j;
    }
};
bool compare(pos a,pos b) {
    return a.ch < b.ch;
}
int N;
char grid[lim][lim];
int vis[lim][lim],dis[lim][lim];
vector <pos> position;
bool flag;

void init() {
    for(int i=0; i<+N; i++) {
        for(int j=0; j<=N; j++) {
            grid[i][j]='*';
            vis[i][j]=dis[i][j]=0;
        }
    }
    position.clear();
}
void clr() {
    for(int i=0; i<=N; i++) {
        for(int j=0; j<=N; j++) {
            vis[i][j]=dis[i][j]=0;
        }
    }
}

bool is_valid(int x,int y, char c) {
    if(grid[x][y]>='A' && grid[x][y]<='Z' && grid[x][y]<=c && x>=1 && y>=1 && x<=N && y<=N){
        return true;
    }
    if(grid[x][y]=='.' && x>=1 && y>=1 && x<=N && y<=N) {
        return true;
    }
    return false;
}
void BFS(char cc,int stx,int sty,int enx,int eny) {
    clr();
    vis[stx][sty]=1;
    dis[stx][sty]=0;
    queue<PII> Q;
    Q.push({stx,sty});
    while(!Q.empty()) {
        int u=Q.front().first;
        int v=Q.front().second;
        if(u==enx && v==eny) {
            return;
        }
        Q.pop();
        for(int i=0; i<4; i++) {
            int xx=u+dx[i];
            int yy=v+dy[i];
            if(!vis[xx][yy] && is_valid(xx,yy,cc)) {
                vis[xx][yy]=1;
                dis[xx][yy]=dis[u][v]+1;
                Q.push({xx,yy});
            }
        }
    }
}


int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    int a,b,c,m,n,p,q,x,y,z;
    while(t--) {
        scanf("%d",&N);
        getchar();
        init();
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                scanf("%c",&grid[i][j]);
                if(grid[i][j]>='A' && grid[i][j]<='Z') {
                    position.push_back(pos(grid[i][j],i,j));
                }
            }
            getchar();
        }

        sort(position.begin(),position.end(),compare);
        int siz= position.size()-1;
        flag=true;
        int sum=0;
        for(int i=0; i<siz; i++) {
            BFS(position[i+1].ch,position[i].x,position[i].y,position[i+1].x,position[i+1].y);
            if(dis[position[i+1].x][position[i+1].y]!=0) {
                sum+=dis[position[i+1].x][position[i+1].y];
            } else {
                flag=false;
                break;
            }
        }
        printf("Case %d: ",++cas);
        if(flag)
            printf("%d\n",sum);
        else
            printf("Impossible\n");
    }
    return 0;
}
