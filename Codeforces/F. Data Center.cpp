
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

int Find(int n){
    int peri=mx,temp;
    int val=sqrt(n);
    for(int i=1; i<=val; i++){
        if(n%i==0){
            if(n/i==i) temp= 4*i;
            else  temp= 2*(i+(n/i));
            peri=min(peri,temp);
        }
    }
    return peri;
}

int main() {
    Fast_Input
    int t=1,cas=0,n;
    //cin>>t;
    while(t--) {
        cin>>n;
        cout<<Find(n)<<endl;
    }
    return 0;
}


