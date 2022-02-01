
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int l,m,n,to;
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&l,&m,&n);
        if(l<=20 && m<=20 && n<=20)
        {
            printf("Case %d: good\n",i);
        }
        else
            printf("Case %d: bad\n",i);

    }
    return 0;
}
