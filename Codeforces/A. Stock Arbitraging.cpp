
#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define ld long double
#define fv first
#define sv second
#define pb push_back
#define mp make_pair
#define in insert
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    IOS
    int n,m,r;
    cin>>n>>m>>r;
    int aa,bb;
    int minn=10000,maxx=0;
    for(int i=0; i<n; i++) {
        cin>>aa;
        minn=min(aa,minn);
    }
    for(int i=0; i<m; i++) {
        cin>>aa;
        maxx=max(aa,maxx);
    }
   // cout<<minn<<" "<<maxx<<endl;
    int k=r/minn;
    bb=(maxx*k)+(r%minn);
    if(bb>r)
        cout<<bb<<endl;
    else
        cout<<r<<endl;
    return 0;
}


