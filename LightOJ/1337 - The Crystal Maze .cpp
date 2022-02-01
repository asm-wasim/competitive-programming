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
const int mod=1e9+7,mx=505,lim=25;
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
char grid[mx][mx];
int vis[mx][mx],crystal[mx][mx],n,m,q,cnt;

void init(){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            grid[i][j]='*';
            crystal[i][j]=-1;
        }
    }
}
void clr(){
    cnt=0;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            vis[i][j]=0;
        }
    }
}
bool is_valid(int x,int y){
    if(x>=0 && y>=0 && x<n && y<m && grid[x][y]!='#' && !vis[x][y])
        return true;
    return false;
}
void DFS(int x,int y){
    vis[x][y]=1;
    if(grid[x][y]=='C') cnt++;
    for(int i=0;  i<4; i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(is_valid(xx,yy)){
            DFS(xx,yy);
        }
    }
}

void Set_All(){
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            if(vis[i][j])
                crystal[i][j]=cnt;
        }
    }
}


int main() {
//    READ("in.txt");
    int t=1,cas=0;
    scanf("%d",&t);
    int a,b,c,d,x,y;
    while(t--) {
        scanf("%d %d %d",&n,&m,&q);
        getchar();
        init();
        for(int i=0; i<n; i++)
            scanf("%s",grid[i]);
        printf("Case %d:\n",++cas);
        while(q--){
            scanf("%d %d",&a,&b);
            a--,b--;
            if(crystal[a][b]!=-1){
                printf("%d\n",crystal[a][b]);
            }else{
                clr();
                DFS(a,b);
                Set_All();
                printf("%d\n",crystal[a][b]);
            }
        }
    }
    return 0;
}
