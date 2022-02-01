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
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=100000+5;
int par[lim],Rank[lim];
map<string,int> mark;
void init(int n) {
    for(int i=0; i<=n; i++) {
        par[i]=i;
        Rank[i]=1;
    }
    mark.clear();
}
int find_par(int x) {
    return par[x]==x? x: par[x]=find_par(par[x]);
}
int  make_union(int x,int y) {
    int a=find_par(x);
    int b=find_par(y);
    if(a != b) {
        if(Rank[a]>Rank[b]) {
            par[b]=a;
            Rank[a]+=Rank[b];
            return Rank[a];
        }
        par[a]=b;
        Rank[b]+=Rank[a];
        return Rank[b];
    }
    return Rank[a];
}
int main() {
    //READ("2in.txt");
    //WRITE("2out.txt");
    int T,F;
    SFI(T);
    string s1,s2;
    while(T--) {
        SFI(F);
        int n=1;
        init(min(lim,2*F));
        for(int i=0; i<F; i++) {
            cin>>s1>>s2;
            if(mark[s1]==0) {
                mark[s1]=n;
                n++;
            }
            if(mark[s2]==0) {
                mark[s2]=n;
                n++;
            }
            int p=mark[s1];
            int q=mark[s2];
            PF("%d\n",make_union(p,q));

        }
    }
    return 0;
}







