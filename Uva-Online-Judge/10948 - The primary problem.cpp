#include <bits/stdc++.h>
using namespace std;
#define SIZE_N 1000000
bool flag[SIZE_N+5];
vector <int> primes;
//map <int,int> check;
void sieve()
{
    int i,j,val;
    for(i=2; i<=SIZE_N; i++)
    {
        //flag.push_back(true);
        flag[i]=1;
    }
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++)
    {
        if(flag[i])
        {
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=false;
        }
    }
    for(i=2; i<=SIZE_N; i++)
    {
        if(flag[i])
            {
                primes.push_back(i);
                //check[i]++;
            }
    }
}

int main()
{
    int num,i,j,temp;
    sieve();
    //freopen("111.txt","r",stdin);
    while(cin>>num)
    {
        if(num==0) break;
        printf("%d:\n",num);
        bool sum_nai=true;
        for(i=0; primes[i]<=num; i++)
        {
                temp=num - primes[i];
                if(flag[temp])
                {
                    sum_nai=false;
                    printf("%d+%d\n",primes[i],temp);
                    break;
                }
        }
        if(sum_nai)
            printf("NO WAY!\n");
    }
    return 0;
}


