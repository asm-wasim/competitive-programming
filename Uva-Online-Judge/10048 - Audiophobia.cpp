
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
const int mx=105;

long long dis[mx][mx];
int c,s,q;
void init() {
    for(int i=0; i<mx; i++) {
        for(int j=0; j<mx; j++) {
            dis[i][j]=INT_MAX;
        }
        dis[i][i]=0;
    }
}
void floid() {
    for(int via=1; via<=c; via++) {
        for(int from=1; from<=c; from++) {
            for(int to=1; to<=c; to++) {
                if(dis[from][via]!=INT_MAX && dis[via][to]!=INT_MAX) {
                    dis[from][to]=min(dis[from][to],max(dis[from][via],dis[via][to]));
                }
            }
        }
    }
}
int main() {
    int cas=0;
    while(SF("%d %d %d",&c,&s,&q)==3) {
        if(c==0 && s==0 && q==0)
            break;
        if(cas>0)
            PF("\n");
        int u,v,w;
        init();
        for(int i=0; i<s; i++) {
            SF("%d %d %d",&u,&v,&w);
            dis[u][v]=(long long)w;
            dis[v][u]=(LL)w;
        }
        floid();
        int a,b;
        PF("Case #%d\n",++cas);
        for(int i=0; i<q; i++) {
            SF("%d %d",&a,&b);
            if(dis[a][b]!=INT_MAX) {
                PF("%lld\n",dis[a][b]);
            } else
                PF("no path\n");
        }
    }
}
