#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[9]= {4,7,44,47,74,77,444,447,477};
    int a,n,f=0;
    cin>>n;
    int n1=n;
    while(n>0)
    {
        a=n%10;
        if(a!=4 && a!=7)
        {
            f=1;
            break;
        }
        n=n/10;
    }
    for(int i=0; i<9 && f==1; i++)
    {
        if(n1%ar[i]==0)
        {
            f=0;
            break;
        }
    }
    if(f==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
