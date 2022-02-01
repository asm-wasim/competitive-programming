
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
//int dx[]= {-1,-1,-1, 0,0, 1,1,1}, dy[]= {-1, 0, 1,-1,1,-1,0,1};  // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=100+5;
const int INFF=1000;
int graph[lim][lim],N,M,SRT,END;
void init() {
    for(int i=0; i<=N; i++) {
        for(int j=0; j<=N; j++)
            graph[i][j]=INFF;
    }
}
void Floid() {
    for(int via=0; via<N; via++) {
        for(int from=0; from<N; from++) {
            for(int to=0; to<N; to++) {
                if(graph[from][via]!=INFF && graph[via][to]!=INFF) {
                    graph[from][to] = min(graph[from][to],graph[from][via] + graph[via][to]);
                }
            }
        }
    }
}
int main() {
    READ("2in.txt");
    int a,b,cas=0,T;
    SFI(T);
    while(T--) {
        SF("%d %d",&N,&M);
        init();
        for(int i=0; i<M; i++) {
            SF("%d %d",&a,&b);
            graph[a][b]=1;
            graph[b][a]=1;
        }
        SF("%d %d",&SRT,&END);
//        for(int i=0; i<N; i++) {
//            for(int j=0; j<N; j++) {
//                if(graph[i][j]!=INFF) {
//                    cout<<graph[i][j]<<" ";
//                } else
//                    cout<<"a ";
//            }
//            cout<<endl;
//        }
//        cout<<endl;
        Floid();
//        for(int i=0; i<N; i++) {
//            for(int j=0; j<N; j++) {
//                if(graph[i][j]!=INFF) {
//                    cout<<graph[i][j]<<" ";
//                } else
//                    cout<<"a ";
//            }
//            cout<<endl;
//        }
        int cnt=0;
        for(int i=0; i<N; i++) {
            cnt=max(cnt,graph[SRT][i]+graph[i][END]);
        }
        PF("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}


