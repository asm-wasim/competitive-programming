

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
int main()
{
    IOS
    ll dnt,t,v,l,r,todv,otr,otl;
    cin>>t;
    while(t--)
    {
        cin>>dnt>>v>>l>>r;
        todv=dnt/v;
        otl=(l-1)/v;
        otr=(r/v)-otl;
        cout<<todv-otr<<endl;
    }
    return 0;
}

