#include <bits/stdc++.h>
int main()
{
    /*int n;
    scanf("%d",&n);
    int door[n+2];
    int k=0,i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&door[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(door[i]==door[j])
                break;
            k=i;
        }
    }
    printf("%d\n",k+1);*/
    int n;
    scanf("%d",&n);
    int door[n+2];
    int k=0,i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&door[i]);
    }
    if(door[n-1]==1)
    {
        for(i=n-2; i>=0; i--)
        {
            if(door[i]==0)
            {
                k=i;
                break;
            }
        }
    }
    else
    {
        for(i=n-2; i>=0; i--)
        {
            if(door[i]==1)
            {
                k=i;
                break;
            }
        }
    }
    printf("%d\n",k+1);
    return 0;
}
