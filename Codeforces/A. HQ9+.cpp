#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin>>p;
    int si=p.size();
    int lol=0;
    for(int i=0; i<si; i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')// || p[i]=='+'
        {

            lol=1;
            break;
        }
    }
    if(lol==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
