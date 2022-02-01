
#include<iostream>
using namespace std;
int main()
{
    int n,a,cnt1=0,cnt2=0,p1,p2;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if((a%2)==0)
        {
            cnt1++;
            p1=i;
        }
        else
        {
            cnt2++;
            p2=i;
        }
    }
    if(cnt1==1)
        cout<<p1<<endl;
    else
        cout<<p2<<endl;
    return 0;
}
