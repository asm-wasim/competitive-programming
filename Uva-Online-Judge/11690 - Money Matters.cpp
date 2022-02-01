
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
const int lim=10005;
int parent[lim],tk[lim],Rank[lim],n,m;
map<int,vector<int> >same;
map<int,vector<int> >::iterator it;
set <int> par;
set <int>::iterator se;
void init() {
    for(int i=0; i<=n; i++) {
        parent[i]=i;
        tk[i]=0;
        Rank[i]=0;
    }
}
int find_par(int id) {
    if(parent[id]==id)
        return id;
    return parent[id]=find_par(parent[id]);
}
void make_union(int u,int v) {
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
    //PF("%d %d P %d %d\n",u,v,x,y);
}
int main() {
    READ("4in.txt");
    WRITE("4out.txt");
    int t;
    SFI(t);
    while(t--) {
        SF("%d %d",&n,&m);
        init();
        for(int i=0; i<n; i++) {
            SFI(tk[i]);
        }
        int u,v;
        for(int i=0; i<m; i++) {
            SF("%d %d",&u,&v);
            make_union(u,v);
        }
        for(int i=0; i<n; i++) {
            same[parent[i]].PB(i);
            par.IN(parent[i]);
        }
        bool flag=true;
        for(se=par.begin(); se!= par.end(); se++) {
            int sum=0;
            for(int j=0; j<same[*se].size(); j++) {
                sum+=tk[same[*se][j]];
                PF("%d ii %d ss %d\n",*se,same[*se][j],tk[same[*se][j]]);
            }
            //PF("SUM = %d\n",sum);
            if(sum != 0) {
                flag=false;
                break;
            }
        }
        if(flag)
            PF("POSSIBLE\n");
        else
            PF("IMPOSSIBLE\n");
        same.clear();
    }
    return 0;
}
