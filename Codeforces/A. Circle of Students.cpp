#include <bits/stdc++.h>
using namespace std;
#define LL           long long
#define ULL          unsigned long long
#define PII          pair<int,int>
#define PII          pair<int,int>
#define PLL          pair<LL,LL>
#define SORT(x)      sort(x.begin(),x.end())
#define SORTD(x)     sort(x.rbegin(),x.rend())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
const LL mod=1e9+7,INF=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0,N;

int main() {
    Fast_Input
    cin>>testCase;
    while(testCase--) {
        cin>>N;
        int a[N+5],ok=1;
        for(int i=0; i<N; i++) cin>>a[i];

        for(int i=1; i<N; i++){
            if( abs(a[i]-a[i-1])>1) {
                    if( (a[i]==1 && a[i-1]==N)|| (a[i]==N && a[i-1]==1) )
                        continue;

                    ok=0; break;
            }
        }
        if(ok)  cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
    return 0;
}


