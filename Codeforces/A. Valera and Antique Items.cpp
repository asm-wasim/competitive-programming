#include <bits/stdc++.h>
using namespace std;
#define SF scanf
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
const int mod=1e6+7;
const int mx=1e6+5;
int main() {
    int n,m,x,y;
    cin>>n>>m;
    int in=0,aa[n+2];
    for(int i=1; i<=n; i++){
        cin>>x;
        int cnt=0;
        for(int j=0; j<x; j++){
            cin>>y;
            if(y<m)cnt++;
        }
        if(cnt>0)
            aa[in++]=i;
    }
    sort(aa,aa+in);
    cout<<in<<endl;
    for(int i=0; i<in; i++)
        cout<<aa[i]<<" ";
    cout<<endl;
    return 0;
}

