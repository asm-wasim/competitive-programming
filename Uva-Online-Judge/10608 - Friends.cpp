
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
const int lim=30000+5;
int par[lim],N,M,Rank[lim];
map<int,int> mp;
map<int,int> ::iterator it;
void init() {
    for(int i=0; i<=N; i++) {
        par[i]=i;
    }
    mp.clear();
}
int find_par(int x) {
    return par[x]==x? x:par[x]=find_par(par[x]);
}
void make_union(int x,int y) {
    int p=find_par(x);
    int q=find_par(y);
    if(p!=q) {
        par[q]=p;
    }
}

int main() {
    int T,x,y,cas=0;
    SFI(T);
    while(T--) {
        SF("%d %d",&N,&M);
        init();
        for(int i=0; i<M; i++) {
            SF("%d %d",&x,&y);
            make_union(x,y);
        }
        for(int i=1; i<=N; i++) {
            mp[find_par(i)]++;
        }
        int maxx=0;
        for(it = mp.begin(); it!= mp.end(); it++){
            //cout<<"sahdk "<<it->FV<<" "<<it->SV<<endl;
            if(it->SV > maxx){
                maxx=it->SV;
            }
        }
        PF("%d\n",maxx);
    }
    return 0;
}
