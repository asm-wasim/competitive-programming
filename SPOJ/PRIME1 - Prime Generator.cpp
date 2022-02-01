
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
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=55000,lim=1e5+5;
bool flag[lim];
vector <LL> primes;
void seive() {
    for(int i=0; i<=mx; i++)
        flag[i]=1;
    for(int i=3; i*i<=mx; i++) {
        if(flag[i]) {
            for(int j=i*i; j<=mx; j+=i) {
                flag[j]=0;
            }
        }
    }
    primes.push_back(2);
    for(LL i=3; i<=mx; i+=2) {
        if(flag[i])
            primes.push_back(i);
    }
}

void segSieve(LL l, LL r) {
    LL range=r-l+1;
    LL cp,base;
    for(int i=0; i<=range; i++)
        flag[i]=1;
    if(l==1)
        flag[0]=0;
    for(LL i=0; (LL) primes[i]*primes[i]<=r ; i++) {
        cp=primes[i];
        base= (l/cp)*cp;
        if(base<l)
            base+=cp;
        for(LL j=base; j<=r; j+=cp) {
            flag[j-l]=0;
        }
        if(base==cp)
            flag[base-l]=1;
    }
    for(LL i=0; i<range; i++)
        if(flag[i])
            PF("%lld\n",l+i);
        puts("");

}
int main() {
//    READ("3in.txt");
    int T,cas=0;
    cin>>T;
    LL L,R;
    seive();
    while(T--) {
        cin>>L>>R;
        segSieve(L,R);
    }
    return 0;
}

