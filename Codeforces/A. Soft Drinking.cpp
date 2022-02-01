#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k*=l;
    k/=nl;
    c*=d;
    p/=np;
    int ans=min(k,c);
    ans=min(ans,p);
    ans/=n;
    cout<<ans<<endl;
    return 0;
}
