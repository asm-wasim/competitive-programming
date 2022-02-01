
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
const int lim=100+5;
const int INFF=1000;
int graph[lim][lim];
map<int,int> mp;
void init() {
    for(int i=0; i<lim; i++) {
        for(int j=0; j<lim; j++)
            graph[i][j]=INFF;
    }
    mp.clear();
}
void Floid() {
    for(int via=1; via<lim; via++) {
        for(int from=1; from<lim; from++) {
            for(int to=1; to<lim; to++) {
                if(graph[from][via]!=INFF && graph[via][to]!=INFF) {
                    graph[from][to] = min(graph[from][to],graph[from][via] + graph[via][to]);
                }
            }
        }
    }
}
int main() {
    //READ("2in.txt");
    int a,b,cas=0;
    while(1) {
        SF("%d %d",&a,&b);
        if(a==0 && b==0)
            break;
        init();
        while(1) {
            graph[a][b]=1;
            mp[a]++;
            mp[b]++;
            SF("%d %d",&a,&b);
            if(a==0 && b==0)
                break;
        }
        Floid();
        double node=0.0,cnt=0.0;
        for(int i=1; i<lim; i++) {
            for(int j=1; j<lim; j++) {
                if(i==j)
                    continue;
                if(graph[i][j]!=INFF) {
                    cnt+=graph[i][j];
                }
            }
        }
        node= (double )mp.size();
        node=(node*(node-1));
        double x= cnt/node;
        PF("Case %d: average length between pages = %.3f clicks\n",++cas,x);
    }
    return 0;
}

