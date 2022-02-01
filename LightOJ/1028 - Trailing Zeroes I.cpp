#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define SFTL(x,y,z)    scanf("%lld %lld %lld",&x,&y,&z)
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
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
///==========================================
const int MOD=1e9+7,mx=1e6+5,lim=25;
#define SIZE_N 1000005
#define SIZE_P 1000005
bool flag[SIZE_N+5];
int primes[SIZE_P+5];
void seive() {
    int i,j,total=0,val;
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
int divisor(int N) {
    int i,val,count,sum;
    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++) {
        if(N%primes[i]==0) {
            count=0;
            while(N%primes[i]==0) {
                N/=primes[i];
                count++;
            }
            sum*=(count+1);
        }
    }
    if(N>1)
        sum=sum*2;
    return sum;
}


int main() {
    seive();
    int t,cas=0;
    SFI(t);
    int n,q,x,y,z;
    while(t--) {
        SFI(n);
        PF("Case %d: %d\n",++cas,divisor(n)-1);
    }
    return 0;
}

