#include <bits/stdc++.h>
using namespace std;
#define scani(x) scanf("%d",&x)
#define printi(x) printf("%d\n",x)
#define ll long long
#define forl(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main()
{
    ll n,x;
    cin>>n>>x;
    ll book[n+3];
    forl(i,0,n)
    {
        cin>>book[i];
    }
    sort(book,book+n);
    ll sum=0;
    forl(i,0,n)
    {
        if(x>1)
        {
            sum+=(book[i]*x);
             x--;
        }
        else
            sum+=book[i];
    }
    printf("%I64d\n",sum);
    return 0;
}
