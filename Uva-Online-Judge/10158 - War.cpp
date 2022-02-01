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
const int lim=10000+5;
int vis[lim],enemi[lim],parent[lim],Rank[lim],N,c,x,y;
int find_par(int x) {
    return parent[x]==x? x:parent[x]=find_par(parent[x]);
}
int find_ene(int x) {
    return enemi[x]==x? x:enemi[x]=find_ene(enemi[x]);
}
void make_fr(int x,int y) {
    int p=find_par(x);
    int q=find_par(y);
    vis[x]=1;
    vis[y]=1;
    if(p==q)
        return;
}
int main() {
    READ("4in.txt");
    SFI(N);
    init();
    while(SF("%d %d %d",&c,&x,&y)==3) {
        if(c==0 && x==0 && y==0)
            break;
        if(c==1) {
            int a=find_ene(x);
            int b=find_ene(y);
            if(a != b && a!=x && b!=y) {
                make_fr(x,y);
            }
        } else if(c==2) {
            int a=find_par(x);
            int b=find_ene(y);
            if(a != b &&  b!=y) {
                make_ene(x,y);
            }
        } else if(c==3) {
            if(are_fr(x,y))
                PF("1\n");
            else
                PF("0\n");
        } else {
            if(are_fr(x,y))
                PF("0\n");
            else
                PF("1\n");
        }
    }
    return 0;
}

