#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int da;
    int max,min,a=0,b=0,c=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&da);
        if(i==0)
        {
            max=da;
            min=da;
        }
        else
        {
            if(da>max)
            {
                max=da;
                a=i;
            }
            if(da<=min)
            {
                min=da;
                b=i;
            }
        }
    }
    if(a>b)
        c=1;

    printf("%d\n",n-1-b+a-c);
    return 0;


}
