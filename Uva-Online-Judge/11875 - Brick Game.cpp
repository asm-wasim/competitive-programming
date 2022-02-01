#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cas=0;
    scanf("%d",&t);
    while(t--)
    {
         scanf("%d",&n);
         int age[n+2];
         for(int i=0; i<n; i++)
             scanf("%d",&age[i]);
         sort(age,age+n);
         printf("Case %d: %d\n",++cas,age[n/2]);
    }
    return 0;
}
