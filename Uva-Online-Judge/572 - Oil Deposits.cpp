#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define MCI map<char,int>
#define MII map<int,int>
#define SII set<int,int>
#define PII pair<int,int>
const int mod=1e6+7;
const int mx=1e6+5;
const int size_p =110;
char grid[size_p][size_p];
int m,n;
int visit[size_p][size_p];
int dx[]= {-1,-1,-1, 0,0, 1,1,1};
int dy[]= {-1, 0, 1,-1,1,-1,0,1};
void dfs(int i,int j) {
    if(visit[i][j])
        return;
    visit[i][j]=1;
    if(grid[i][j]=='@') {
        int p,q;
        for(int k=0; k<8; k++) {
            p=i+dx[k];
            q=j+dy[k];
            dfs(p,q);
        }
    }
}
void reset(){
    for(int i=0; i<size_p; i++){
        for(int j=0; j<size_p; j++){
            grid[i][j]='.';
            visit[i][j]=0;
        }
    }
}
int main() {
    //READ("3in.txt");
    //WRITE("3out.txt");
    while(SF("%d",&m)==1) {
        if(m==0) break;
        SF("%d",&n);
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++)
                cin>>grid[i][j];
        }
        int cnt=0;
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                if(!visit[i][j] && grid[i][j]=='@') {
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        PF("%d\n",cnt);
        reset();
    }
    return 0;
}
