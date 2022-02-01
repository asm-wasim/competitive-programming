#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int pu[55];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&pu[i]);
    }
    sort(pu,pu+m);
    int dif=pu[n-1]-pu[0];
    for(int i=1; i<=m-n; i++)
    {
        if(pu[i+n-1]-pu[i]<dif)
            dif=pu[i+n-1]-pu[i];
    }
    printf("%d\n",dif);
    return 0;
}
