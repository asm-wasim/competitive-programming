#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,hj,lj,temp,jump;
    scanf("%d",&t);
    for(int cas=1; cas<=t; cas++)
    {
        hj=lj=0;
        scanf("%d",&n);
        scanf("%d",&temp);
        for(int i=1; i<n; i++)
        {
            scanf("%d",&jump);
            if(jump<temp)
                lj++;
            else if(jump>temp)
                hj++;
            temp=jump;
        }
        printf("Case %d: %d %d\n",cas,hj,lj);
    }
    return 0;
}
