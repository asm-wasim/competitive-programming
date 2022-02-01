#include <bits/stdc++.h>
int main()
{
    int n,a;
    double sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    double d=sum/n;
    printf("%.12lf\n",d);
    return 0;
}
