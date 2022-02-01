
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

/// SCC : Not solved
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=2005;
int N,M,u,v,w;
int check[lim][lim],vis[lim][lim];
void init() {
    for(int i=0; i<=N; i++) {

    }
}
vector <int> edge[lim];



int main() {
    while(SF("%d %d",&N,&M)==2) {
        if(N+M==0)
            break;
        init();
        for(int i=0; i<M; i++) {
            SF("%d %d %d",&u,&v,&w);
            if(w==1) {
                edge[u].PB(v);
            } else {
                edge[u].PB(v);
                edge[v].PB(u);
            }
        }
        for(int i)

    }
}
