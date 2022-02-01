
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
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
vector <int> primes;
bool flag[mx];
void sieve() {
    memset(flag,1,sizeof flag);
    for(int i=3; i*i<=mx; i++) {
        if(flag[i]) {
            for(int j=i*i; j<=mx; j+=i) {
                flag[j]=0;
            }
        }
    }
//    primes.PB(2);
    for(int i=3; i<=mx; i+=2)
        if(flag[i])
            primes.PB(i);
}

int main() {
    Fast_Input
    int n,x,y,z,p,q;
    sieve();
    bool ch;
    while(cin>>n && n!=0) {
        int i=-1;
        y=primes[0];
        x=n;
        ch=false;
        while(y<=x) {
            i++;
            y=primes[i];
            x= n-primes[i];
            if(flag[x]==1 && x%2 !=0  && x>1) {
                p=y;
                q=x;
                ch= true;
                break;
            }
        }
        if(!ch) {
            cout<<"Goldbach's conjecture is wrong.\n";
        } else {
            cout<<n<<" = "<<p<<" + "<<q<<endl;
        }
    }
    return 0;
}
