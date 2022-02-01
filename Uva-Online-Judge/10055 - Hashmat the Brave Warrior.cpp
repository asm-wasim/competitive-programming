
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,ans;
    while(cin>>a>>b)
    {
        if(a>=b)
            ans=a-b;
        else
            ans=b-a;
        cout<<ans<<endl;
    }
}
