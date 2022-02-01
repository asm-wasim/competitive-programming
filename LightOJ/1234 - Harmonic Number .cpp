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
const int mod=1e9+7,mx1=1e6,mx2=1e8+5,lim=25;
double har[mx1];
void Harmonic(){
    har[0]=0;
    for(int  i=1; i<=mx1; i++){
        har[i]= har[i-1]+(1.0/(double)i);
    }
}
const double gama=0.5772156649;
double Find_Har(LL n){
    if(n<=mx1) return har[n];
    double H= log(n)+gama+ (1.0 /(2* (double)n));  ///Hn= log(n)+gama+1/2n-1/12n^2
    H= H- (1.0 /(12.0 * (double)(n*n)));
    return H;
}

int main() {
    //READ("3in.txt");
    //WRITE("3out.txt");
    int T,cas=0;
    Harmonic();
    LL n;
    SFI(T);
    while(T--) {
        SFL(n);
        double ans= Find_Har(n);
        PF("Case %d: %0.10f\n",++cas,ans);
    }
    return 0;
}

