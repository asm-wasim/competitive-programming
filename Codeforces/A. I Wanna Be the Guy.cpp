#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,px[201];
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=0; i<x; i++)
        scanf("%d",&px[i]);
    scanf("%d",&y);
    y=x+y;
    for(int i=x; i<y; i++)
        scanf("%d",&px[i]);
    sort(px,px+y);
    int j=1,cnt=0;
    for(int i=0; i<y; i++)
    {
        if(px[i]==j && px[i]!=px[i+1])
        {
            cnt++;
            j++;
        }
    }
    if(cnt==n)
    {
        printf("I become the guy.\n");
    }
    else
        printf("Oh, my keyboard!\n");
    return 0;
}
