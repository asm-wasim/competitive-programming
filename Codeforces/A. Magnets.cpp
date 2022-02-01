#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a,b,c;
    int cnt=1;
    cin>>a>>b;
    c=b;
    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        if(c==a)
            cnt++;
        c=b;
    }
    cout<<cnt<<endl;
    return 0;
}
