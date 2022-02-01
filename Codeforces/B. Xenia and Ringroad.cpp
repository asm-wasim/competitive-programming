#include <bits/stdc++.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int temp=1;
    long long cnt=0;
    int a;
    while(m--)
    {
        scanf("%d",&a);
        if(a>temp)
            cnt+=(a-temp);
        else if(a<temp)
            cnt+=(n-temp)+a;
        temp=a;
    }
    printf("%I64d\n",cnt);
    return 0;
}
