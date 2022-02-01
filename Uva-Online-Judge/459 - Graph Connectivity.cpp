
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
const int lim=30;
int N,vis[lim],cnt;
vector <int> edge[lim];

void init() {
    for(int i=0; i<=N; i++) {
        edge[i].clear();
        vis[i]=0;
    }
}
void dfs(int x) {
    vis[x]=1;
    for(int i=0; i<edge[x].size(); i++) {
        int y=edge[x][i];
        if(!vis[y]) {
            dfs(y);
        }
    }
}


int main() {
//    READ("2in.txt");
    int T;
    char a[10];
    SF("%d",&T);
    getchar();
    getchar();
    while(T--) {
        gets(a);
        N=a[0]-'A';
        init();
        while(gets(a)) {
            if(a[0]=='\0')
                break;
            int u=a[0]-'A';
            int v=a[1]-'A';
            edge[u].PB(v);
            edge[v].PB(u);
        }
        cnt=0;
        for(int i=0; i<=N; i++) {
            if(!vis[i]) {
                cnt++;
                dfs(i);
            }
        }
        cout<<cnt<<endl;
        if(T)
            puts("");
    }
    return 0;
}
