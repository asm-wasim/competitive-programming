

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
    Fast_Input
    int t=1,cas=0,n;
//    cin>>t;
    while(t-- && cin>>n) {
        int pos; cin>>pos;
        int ar[n+5]={0};
        for(int i=1; i<=n; i++) cin>>ar[i];
        int cnt=0;
        int j=pos-1, k= pos+1;
        while(j>=1 && k<=n){
            if(ar[j]==1 && ar[k]==1) cnt+=2;
            ar[j]=ar[k]=0;
            j--,k++;
        }
        for(int i=1; i<=n; i++) if(ar[i]==1) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}



