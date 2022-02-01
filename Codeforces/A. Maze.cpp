
#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
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
const int mod=1e9+7,mx=1e6+5,lim=600;
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side

int n,m,s,k;
char grid[lim][lim];
int cnt=0,vis[lim][lim];

bool valid(int x,int y) {
    if(x>=1 && y>=1 && x<=n && y<=m && !vis[x][y] && grid[x][y]=='.' )
        return true;
    return false;
}

void DFS(int x,int y) {
    vis[x][y]=1;
    cnt++;
    if(cnt>s)
        grid[x][y]='X';
    for(int i=0; i<4; i++) {
        int xx= dx[i]+x;
        int yy= dy[i]+y;
        if(valid(xx,yy)) {
            DFS(xx,yy);
        }
    }
}

int main() {
    SF("%d %d %d",&n,&m,&k);
    getchar();
    s=0;
    int p,q;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>grid[i][j];
            if(grid[i][j]=='.') {
                s++;
                p=i,q=j;
            }
        }
    }
    s-=k;
    DFS(p,q);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}
