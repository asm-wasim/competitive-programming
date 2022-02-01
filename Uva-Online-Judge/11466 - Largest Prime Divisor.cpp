#include <bits/stdc++.h>
using namespace std;
long long lpd(long long N)
{
    long long prime = 0;
    for (long long i=2; i*i <= N; ++i)
    {
        if (N%i == 0)
        {
            prime = i;
            while (N%i == 0)
                N /= i;
        }
    }

    if (N > 1)
    {
        prime = N;
    }
    return prime;
}
int main()
{
    //freopen("11.txt","r",stdin);
    //freopen("111.txt","w",stdout);
    long long num;
    while(scanf("%lld",&num)==1)
    {
        if(num==0) break;
        if(num<0)
            num*=(-1);
        long long ans=lpd(num);
        if(ans>2 && ans != num && ans*ans !=num)
            printf("%lld\n",ans);
        else
            printf("-1\n");
    }
    return 0;
}
