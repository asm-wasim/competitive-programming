
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
    //READ("a.txt");
    //WRITE("b.txt");
    int t,n,p,q,r,weight;
    cin>>t;
    for(int i=1; i<=t; i++) {
        cin>>n>>p>>q;
        r=0;
        for(int j=1; j<=n; j++) {
            cin>>weight;
            if(p>0 && weight<= q) {
                r++;
                p--;
                q-=weight;
            }
        }
        printf("Case %d: %d\n",i,r);
    }
    return 0;
}


