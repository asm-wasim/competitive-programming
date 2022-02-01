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
#define Fast_Input   ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,inf=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0,N;

int main() {
    Fast_Input

    cin>>testCase;
    while(testCase--) {
        cin>>N;
        int a[N+5], b[N+5];

        int ok=1,cnt=0;
        vector <int> pos;

        for(int i=0; i<N; i++) cin>>a[i];
        for(int i=0; i<N; i++){
            cin>>b[i];
            if(a[i]>b[i]){
                ok=0;
            }else if(a[i]!=b[i]){
                pos.push_back(i);
            }
        }
        if(ok==0 || cnt>1) cout<<"NO"<<endl;
        else if(pos.size()==0) cout<<"YES"<<endl;
        else{
            int dif= b[pos[0]]-a[pos[0]];
            for(int i=1; i<pos.size(); i++){
                if(b[pos[i]]-a[pos[i]] != dif || abs(pos[i]-pos[i-1])>1){
                    ok=0; break;
                }
            }
            if(ok && dif>0) cout<<"YES"<<endl;
            else  cout<<"NO"<<endl;
        }
    }
    return 0;
}


