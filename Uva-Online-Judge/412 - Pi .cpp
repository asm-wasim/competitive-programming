


#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    int t=1,cas=0,n;
    while(scanf("%d",&n)==1 && n>0) {
        int ar[n+5];
        for(int i=0; i<n; i++) scanf("%d",&ar[i]);
        double cnt1=0.0,cnt2=0.0;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++){
                cnt1++;
                if(__gcd(ar[i],ar[j])==1) cnt2++;
            }

        if(cnt2==0.0)
            printf("No estimate for this data set.\n");
        else{
            double ans= cnt2/cnt1;   ///Also cnt1= (n*(n-1))/2;
            ans= 6.0/ans;
            ans=sqrt(ans);
            printf("%.6f\n",ans);
        }
    }
    return 0;
}

