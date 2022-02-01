

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    Fast_Input
    int t=1,cas=0,n;
    //cin>>t;
    while(t--) {
        int minn=INT_MAX,pos=0,ok=1;
        cin>>n;
        int ar[n+5],br[n+5];
        for(int i=0; i<n; i++){
            cin>>ar[i]; br[i]=ar[i];
        }
        sort(br,br+n);
        int L=0,R=0;
        int k=0,j=n-1;
        while(k<n){
            if(ar[k]!=br[k]){
                L=k; break;
            }
            k++;
        }
        while(j>=0 && j>=L){
            if(ar[j] != br[j]){
                R=j; break;
            }
            j--;
        }
        int a=L,b=R;

        while(L<=R){
            swap(ar[L],ar[R]);
            L++,R--;
        }
        for(int i=0; i<n; i++){
            if(ar[i]!=br[i]){
                ok=0; break;
            }
        }
        if(ok) cout<<"yes"<<endl<<a+1<<" "<<b+1<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

