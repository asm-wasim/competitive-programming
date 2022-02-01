
#include <stdio.h>
#include <math.h>
#define SIZE_N 100
#define SIZE_P 100
bool flag[SIZE_N+5];
int primes[SIZE_P+5];
int seive()
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
    seive();
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0; i<SIZE_P; i++)
    {
        if(n==primes[i])
            break;
    }
    if(m==primes[i+1])
        printf("YES\n");
    else
        printf("NO\n");
}
/*#include <stdio.h>
#include <math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int np,i,j;
    int a=0;
    for(i=n+1; i<=m; i++)
    {
        for( j=2; j<i; j++)
        {
            if(i%j==0)
            {
                a=1;
                break;
            }
        }
        if(a==0)
            np=i;
    }
    if(np==m)
        printf("YES\n");
    else
        printf("NO\n");
}
*/
