
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

bool is_prime(LL x){
    LL val= sqrt(x)+1;
    for(int i=2; i<=val; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    Fast_Input
    int t=1,cas=0;
    cin>>t;
    while(t--) {
        LL a,b;
        cin>>a>>b;
        LL cc= a-b, dd= a+b;
        if(cc != 1){
            cout<<"NO"<<endl;
        }else{
            if(is_prime(dd)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

