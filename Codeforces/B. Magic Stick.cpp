
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
const int inf=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0;

int main(){
    Fast_Input
    cin>>testCase;
    int x,y;
    while(testCase--){
        cin>>x>>y;
        int ok=0;

        if(x>=y) ok=1;
        else{
            if(x==2 && y<=3) ok=1;
            else if(x>2 && x%2==0){
                ok=1;
            }else if(x%2==1 && x>3) ok=1;
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
