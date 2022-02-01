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
const int mod=1e9+7,mx=1e6+5,lim=200005;
int ar[lim],br[lim],n,vis1[lim],vis2[lim];
int main() {
    Fast_Input
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>ar[i]>>br[i];
    }
    int cnt=0;
    double yy=0.0,xx=0.0;
    for(int i=0; i<n; i++) {
        if(vis1[i]==0 && vis2[i]==0) {
            for(int j=i+1; j<n; j++) {
                if(vis1[i]==1 && vis2[i]==1)
                    break;
                if(vis1[j]==0 && vis2[j]==0) {
                    xx= abs(ar[i]-ar[j])+abs(br[i]-br[j]);
                    yy= sqrt(((ar[i]-ar[j])*(ar[i]-ar[j]))+((br[i]-br[j])*(br[i]-br[j])));
                    if(xx=yy) {
                        cnt++;
                        vis1[i]=vis1[j]=vis1[j]=vis2[j]=1;
                        cout<<ar[i]<<","<<br[i]<<"    "<<ar[j]<<","<<br[j]<<endl;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

