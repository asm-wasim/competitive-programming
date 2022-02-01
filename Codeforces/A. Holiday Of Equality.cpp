
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
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    for(int i=0; i<n-1; i++)
    {
        ans+=(a[n-1]-a[i]);
    }
    cout<<ans<<endl;
    return 0;
}


