
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p ;
    cin>>p;
    int si=p.size();
    int ll=0;
    for(int i=1; i<si; i++)
    {
        if(islower(p[i]))
        {
            ll=1;
            cout<<p<<endl;
            break;
        }
    }
    if(ll==0)
    {
        if(islower(p[0]))
        {
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            p[0]=p[0]-32;
            cout<<p<<endl;
        }
        else

        {
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            cout<<p<<endl;
        }

    }
    return 0;
}
