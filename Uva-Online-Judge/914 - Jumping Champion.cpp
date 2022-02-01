
#include <bits/stdc++.h>
using namespace std;
#define SIZE_N 1000000
bool flag[SIZE_N+5];
int primes[SIZE_N+5];
void sieve()
{
    int i,j,total=0,val;
    for(i=2; i<=SIZE_N; i++)
    {
        flag[i]=1;
    }
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++)
    {
        if(flag[i])
        {
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=0;
        }
    }
    for(i=2; i<=SIZE_N; i++)
    {
        if(flag[i])
            primes[total++]=i;
    }
}
int main()
{
    int t,l,u,temp,i,j,cnt;
    sieve();
    map <int,int> mymap;
    map <int,int> ::iterator mp;
    //vector <int,int> myvec;
    //vector <int,int> ::iterator vec;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&l,&u);
        temp=0; cnt=0;
        for( j=0; primes[j]u; j++)
        {
            if(primes[j]>=l)
            {
                temp=primes[j+1]-primes[j];
                mymap[temp]++;
                cnt++;
                cout<<cnt<<endl;
            }
        }
        if(cnt==2)
            printf("No jumping champion\n");
        else
        {
            for(mp=mymap.begin(); mp != mymap.end(); mp++)
            {

            }
        }
        mymap.clear();
    }
    return 0;
}
