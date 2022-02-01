#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int SIZE_P= 1e6;
const int SIZE_N= 1e7;
bool flag[SIZE_N+5];
LL primes[SIZE_P+5],total=0;
void seive() {
    LL i,j,val;
    for(i=2; i<=SIZE_N; i++)
        flag[i]=1;
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++)
        if(flag[i])
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=0;
    for(i=2; i<=SIZE_N; i++)
        if(flag[i])
            primes[total++]=i;
}
LL Sum_Div(LL N) {
    LL i,val=0,cnt,sum;
    sum=1;
    for(i=0; i<total && primes[i]*primes[i]<=N; i++) {
        if(N%primes[i]==0) {
            cnt=0;
            while(N%primes[i]==0) {
                N/=primes[i];
                cnt++;
            }
            sum*=(2*cnt+1);
        }
    }
    if(N>1)
        sum*=3;
    return 1+ceil(sum/2);

}
int main() {
    //READ("3in.txt");
    int T,cas=0;
    SFI(T);
    LL N;
    seive();
    while(T--) {
        SFL(N);
        PF("Case %d: %lld\n",++cas,Sum_Div(N));
    }
    return 0;
}
