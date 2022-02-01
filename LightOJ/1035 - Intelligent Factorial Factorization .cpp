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

int factor[105][105];
vector <int> primes;
void seive() {
    bool flag[105]= {0};
    int val= sqrt(100)+1;
    for(int i=2; i<=val; i++) {
        if(flag[i]==0) {
            for(int j=i; j*i<=100; j++) {
                flag[j*i]=1;
            }
        }
    }
    for(int i=2; i<100; i++)
        if(flag[i]==0)
            primes.PB(i);
//    for(int i=0; i<primes.size(); i++)
//        cout<<primes[i]<<" ";
//    cout<<endl;
}
void primesFactor(int n) {
    int range= sqrt(n)+1, index=n,cnt;
    for(int i=0; primes[i]<=range; i++) {
        if(n%primes[i]==0) {
            cnt=0;
            while(n%primes[i]==0) {
                cnt++;
                n/=primes[i];
            }
            factor[index][primes[i]]=cnt;
        }
    }
    if(n>1) {
        factor[index][n]++;
    }
}


void makeFactList() {
    primesFactor(2);
    for(int i=3; i<=100; i++) {
        primesFactor(i);
        //cout<<i<<" ===== "<<endl;
        for(int j=0; primes[j]<=i; j++) {
            factor[i][primes[j]]+= factor[i-1][primes[j]];
            //cout<<j<<" "<<factor[i][j]<<endl;
        }
        // cout<<"======"<<endl;
    }
}


int main() {
    seive();
    makeFactList();
    int t,cas=0;
    SFI(t);
    int n,q,x,y,z;
    while(t--) {
        SFI(n);
        PF("Case %d: %d = ",++cas,n);
        int siz=primes.size();
        for(int i=0; primes[i]<=n && i<siz; i++) {
            PF("%d (%d)",primes[i],factor[n][primes[i]]);
            if(primes[i+1]<=n && i != siz-1) {
                PF(" * ");
            }
        }
        puts("");
    }
    return 0;
}

