#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool prime[32]= {0,0,2,3,0,5,0,7,0,0,0,11,0,13,0,0,0,17,0,19,0,0,0,23,0,0,0,0,0,29,0,31};
    bool perfect[32]= {0,0,2,3,0,5,0,7,0,0,0,0,0,13,0,0,0,17,0,19,0,0,0,0,0,0,0,0,0,0,0,31};
    int n;
    long long ans;
    while(scanf("%d",&n)==1 && n!=0)
    {
        if(perfect[n])
        {
            ans=pow(2,n-1);
            ans*=(pow(2,n)-1);
            printf("Perfect: %lld!\n",ans);
        }
        else if(prime[n])
            printf("Given number is prime. But, NO perfect number is available.\n");
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
