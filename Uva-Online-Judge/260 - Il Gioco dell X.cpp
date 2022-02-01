
#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
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
#define PII pair<int,int>
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=205;
int N;
int dx[]= {-1,-1, 0, 0, 1,1};
int dy[]= {-1, 0,-1, 1, 0,1};
char adj[lim][lim];
int vis[lim][lim],flag,cas=1;

void init() {
    for(int i=0; i<=N; i++) {
        for(int j=0; j<=N; j++) {
            adj[i][j]='.';
            vis[i][j]=0;
        }
    }
}
bool is_valid(int x,int y) {
    if(x>=0 && y>=0 && x<N && y<N && !vis[x][y])
        return 1;
    return 0;
}
void DFSB(int x,int y) {
    vis[x][y]=1;
    for(int i=0; i<6 ; i++) {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(is_valid(xx,yy) && adj[xx][yy]=='b') {
            DFSB(xx,yy);
        }
    }
    return;
}

int main() {
//    READ("2in.txt");
//    WRITE("2out.txt");
    while(cin>>N && N!=0) {
        init();
        for(int i=0; i<N; i++) {
            SF("%s",adj[i]);
        }
        for(int i=0; i<N; i++) {
            if(adj[0][i]=='b' && !vis[0][i]) {
                DFSB(0,i);
            }
        }
        flag=0;
        for(int i=0; i<N; i++) {
            if(vis[N-1][i]) {
                flag=1;
                break;
            }
        }
        if(flag)
            PF("%d B\n",cas++);
        else
            PF("%d W\n",cas++);
    }
    return 0;
}
