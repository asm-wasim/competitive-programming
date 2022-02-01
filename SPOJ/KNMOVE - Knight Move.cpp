#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define SFTL(x,y,z)    scanf("%lld %lld %lld",&x,&y,&z)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
///==========================================

int dx[]={1,1,-1,-1,2,2,-2,-2};
int dy[]={2,-2,2,-2,1,-1,1,-1};

///==============
const int MOD=1e9+7,mx=1005,lim=25;
bool  visit[mx][mx];
int dis[mx][mx];

void clr() {
    for(int i=0; i<mx; i++) {
        for(int j=0; j<mx; j++) {
            dis[i][j]=visit[i][j]=0;
        }
    }
}
bool valid(int x,int y){
    if(visit[x][y]==0 && x>0 && y>0 && x<=1000 && y<=1000)
        return true;
    return false;
}


void  BFS(int x,int y) {
//    clr();
    visit[x][y]=1;
    dis[x][y]=0;
    queue <PII> Q;
    Q.push({x,y});
    while(!Q.empty()){
        int p= Q.front().first;
        int q= Q.front().second;
        Q.pop();
        for(int i=0; i<8; i++){
            int xx= p+dx[i];
            int yy= q+dy[i];
            if(valid(xx,yy)){
                visit[xx][yy]=1;
                dis[xx][yy]= dis[p][q]+1;
//                cout<<xx<<" "<<yy<<endl;
               Q.push({xx,yy});
            }
        }
    }
    return;
}

int main() {
    int t,cas=0;
    SFI(t);
    int n,q,x,y,z;
    BFS(1,1);
    while(t--) {
        SFDI(x,y);
        PF("%d\n",dis[x][y]);
    }
    return 0;
}

