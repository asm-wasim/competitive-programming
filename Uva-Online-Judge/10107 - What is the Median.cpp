
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("qu.txt","r",stdin);
    vector <int> myarray;
    int x,n,i;
    while(cin>>x)
    {
        myarray.push_back(x);
        sort(myarray.begin(),myarray.end());
        n=myarray.size();
        if(n==1)
            cout<<x<<endl;
        else if(n%2 !=0)
        {
            cout<<myarray[n/2]<<endl;
        }
        else
        {
            cout<<(myarray[(n/2)-1] + myarray[n/2])/2<<endl;
        }

    }
    return 0;

}
