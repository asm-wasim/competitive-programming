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
const LL mod= 1e11+3;

// C function for extended Euclidean Algorithm (used to
// find modular inverse.
LL gcdExtended(LL a, LL b, LL *x, LL *y) {
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
    LL x1, y1; // To store results of recursive call
    LL gcd = gcdExtended(b%a, a, &x1, &y1);
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
LL modInverse(LL b, LL m) {
    LL x, y; // used in extended GCD algorithm
    LL g = gcdExtended(b, m, &x, &y);
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
    // m is added to handle negative x
    return (x%m + m) % m;
}
// Function to compute a/b under modlo m
LL modDivide(LL a, LL b, LL m) {
    a = a % m;
    LL inv = modInverse(b, m);
    if (inv == -1)
        return -1;
//        cout << "Division not defined";
    else
        return (inv * a) % m;
//        cout << "Result of division is " << (inv * a) % m;
}


int main() {
//    READ("4 in.txt");
    int t=1,cas=0;
    //SFI(t);
    LL n,q,x,y,z,x1,x2,x3,x4,x5,x6,a,b;
    while(~SF("%lld %lld %lld %lld %lld %lld",&x1,&x2,&x3,&x4,&x5,&x6)) {
//        if(x2-x1==0) {
//            PF("0\n");
//        } else {
           // a= (x3-x2)/(x2-x1);
            //a%=mod;
            a= modDivide(x3-x2,x2-x1,mod);
            if(a==-1)
                PF("0\n");
            else{
            q= ((a%mod)*(x1%mod))%mod;
            b= ((x2%mod)-(q%mod))%mod;
            x= ((((a%mod)*(x6%mod))%mod)+(b%mod))%mod;
            PF("%lld\n",x%mod);
            }
//        }
    }
    return 0;
}

