#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,cnt,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        cnt=0;
        int lim=sqrt(n)+1;
        for(i=1; i<lim; i++)
        {
            if(n%i==0)
            {
                if(i%k !=0)
                    cnt+=i;
                temp=(n/i);
                if(temp%k !=0 && temp != i)
                    cnt+=temp;
            }
        }
        printf("%d\n",cnt);

    }
    return 0;
}
