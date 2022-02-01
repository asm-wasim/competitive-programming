#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int da[101];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&da[i]);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(da[j]==i)
            {
                printf("%d ",j+1);
                break;
            }
        }
    }
    printf("\n");

}
