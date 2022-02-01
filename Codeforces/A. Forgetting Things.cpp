


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
//    scanf("%d",&t);
    while(t--) {
        int a,b;
        cin>>a>>b;
        if(a==9 && b==1){
            cout<<99<<" "<<100<<endl;
        }else if(abs(a-b)>1){
            cout<<-1<<endl;
        }else{
            if(a==b){
                cout<<a<<12<<" "<<b<<13<<endl;
            }else if(a<b){
                cout<<a<<99<<" "<<b<<"00"<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}

