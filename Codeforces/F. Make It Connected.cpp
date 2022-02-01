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
const int mod=1e9+7,mx=200000+50,lim=25;

struct node {
    LL u,v,w;
    node(LL a,LL b,LL c) {
        u=a,v=b,w=c;
    }
};
bool compare(node a,node b) {
    return a.w < b.w;
}

LL ans=0;
LL n,m;
vector <node> graph;
LL ar[mx],par[mx];

LL Find(LL x) {
    return (par[x]==x ? x : (par[x]=Find(par[x])));
}

void MST() {
    sort(graph.begin(),graph.end(),compare);
//    for(int i=0; i<graph.size(); i++){
//        cout<<graph[i].u<<" "<<graph[i].v<<" "<<graph[i].w<<endl;
//    }
    int cnt=0;
    for(int i=0; i<=n; i++)
        par[i]=i;
    for(int i=0; i<graph.size(); i++) {
        LL x=Find(graph[i].u);
        LL y=Find(graph[i].v);
        if(x!=y) {
            cnt++;
            par[y]=x;
            ans+=graph[i].w;
            if(cnt==n) {
                break;
            }
        }
    }
}

int main() {
    SFDL(n,m);
    LL minn=1e18,pos=0;
    for(int i=1; i<=n; i++) {
        SFL(ar[i]);
        if(ar[i]<minn) {
            minn=ar[i];
            pos=i;
        }
    }
    LL u,v,w;
    for(int i=0; i<m; i++) {
        SFDL(u,v);
        SFL(w);
        graph.push_back(node(u,v,w));
    }
    for(int i=1; i<=n; i++) {
        if(i != pos) {
            graph.push_back(node(pos,i,minn+ar[i]));
        }
    }
    MST();
    PF("%lld\n",ans);
    return 0;
}

