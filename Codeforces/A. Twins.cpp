#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];

    }
    int count=0,temp=0;
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        count++;
        temp+=a[i];
        if(temp>(sum-temp))
        {
            break;
        }
    }
    cout<<count<<endl;
}
