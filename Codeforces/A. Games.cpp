#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int h[31],g[31],cnt=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&h[i],&g[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(h[i]==g[j])
                cnt++;
        }
    }
    printf("%d\n",cnt);
}
