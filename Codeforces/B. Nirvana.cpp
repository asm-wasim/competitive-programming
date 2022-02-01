#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, maxx;
    scanf("%I64d", & n);
    ll temp,product=1;
    temp=n;
    while(temp>0)
    {
        product*=temp%10;
        temp/=10;
    }
    maxx=product;
    //cout<<maxx<<endl;
    while(n--)
    {
        product=1;
        temp=n;
        //cout<<temp<<endl;
        while(temp>0)
        {
            product*=temp%10;
            temp/=10;
            if(product==0)
                break;
        }
        if(product> maxx)
        {
            maxx=product;
            break;
        }
        //cout<<maxx<<"  "<<product<<endl;
    }
    printf("%I64d\n",maxx);
    return 0;

}
