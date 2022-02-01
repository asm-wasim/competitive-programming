#include <iostream>
#include <cstdio>
int main()
{
    int n,m,cnt1=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&m);
        if(m==1)
            cnt1++;
    }
    if(cnt1 >0)
        printf("HARD\n");
    else
        printf("EASY\n");
    return 0;
}
