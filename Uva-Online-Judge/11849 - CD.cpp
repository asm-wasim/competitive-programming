
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("b.txt","r",stdin);
    long long int n,m,i;
    map <int,int> mp;
    map <int,int> ::iterator it;
    long long int x;
    long long int cnt=0;
    while(cin>>n>>m)
    {

        if(n==0 && m==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(i=0; i<m; i++)
        {
            cin>>x;
            if(mp[x]>=1)
                cnt++;
        }
        cout<<cnt<<endl;

        mp.clear();
        cnt=0;
    }

    return 0;
}
