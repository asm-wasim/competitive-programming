#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
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
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=1000;
int parent[lim],Rank[lim];
void init(int n) {
    for(int i=0; i<=n; i++) {
        parent[i]=i;
        Rank[i]=0;
    }
}
int find_par(int id) {
    if(parent[id]==id)
        return id;
    return parent[id]=find_par(parent[id]);
}
void connect(int u,int v) {
    int x=find_par(u);
    int y=find_par(v);
    if(x==y)
        return;
    if(Rank[x]>Rank[y]) {
        parent[y]=x;
    } else {
        parent[x]=y;
        if(Rank[x]==Rank[y])
            Rank[x]++;
    }
}

bool check(int u,int v){
    return find_par(u)==find_par(v)? true:false;
}

int main() {
    //READ("2in.txt");
    int T;
    SFI(T);
    int u,v,n;
    char cmd[10],ch;
    while(T--) {
        SF("\n%d\n",&n);
        init(n);
        int yes=0,no=0;
        while(gets(cmd) && strlen(cmd)>0 ) {
            sscanf(cmd,"%c %d %d",&ch,&u,&v);
            //PF("%c %d %d\n",ch,u,v);
            if(ch=='c') {
                connect(u,v);
            } else{
                if(check(u,v))
                    yes++;
                else no++;
            }
        }
        PF("%d,%d\n",yes,no);
        if(T)
            puts("");
    }
    return 0;
}
