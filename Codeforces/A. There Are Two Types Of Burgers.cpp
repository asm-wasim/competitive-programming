
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
int main() {
    int t,cas=0;
    SFI(t);
    int x,y,z,b,p,f,h,c;
    while(t--) {
        SF("%d %d %d",&b,&p,&f);
        SFDI(h,c);
        b/=2;
        z=b;
        int ans=0;
        x= h* min(b,p);
        b-=min(b,p);
        x+= c* min(b,f);
        y= c* min(z,f);
        z-=min(z,f);
        y+= h* min(z,p);
        ans= max(x,y);
        PFI(ans);
    }
    return 0;
}





//        if(b<p && b<f){
//            ans=0;
//        }else if(b<p && b>=f){
//            ans= c* min(b,f);
//        }else if(b>=p && b<f){
//            ans= h* min(b,p);
//        }else{
//            if(h>=c && p>=f){
//                ans= h* min(b,p);
//            }else if(h>=c && p<f){
//                ans= h* min(b,p);
//                b-= min(b,p);
//                ans+= (c* min(b,f));
//            }else if(c>h && f>p){
//                ans= c* min(b,f);
//            }else{
//                ans= c* min(b,f);
//                b-= min(b,f);
//                ans+= h* min(b,p);
//            }
//        }
