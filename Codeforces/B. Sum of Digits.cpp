

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

string ToString(LL num) {
    ostringstream str1;
    str1 << num;
    return str1.str();
}

string Change(string s){
    LL sum=0,siz=s.size();
    for(LL i=0; i<siz; i++){
        sum+=(s[i]-'0');
    }
    return ToString(sum);
}

int main() {
    Fast_Input
    int t=1,cas=0,n;
    //cin>>t;
    while(t--) {
        int cnt=0; string str;
        cin>>str;
        while(str.size()>1){
            cnt++;
            str= Change(str);
        }
        cout<<cnt<<endl;
    }
    return 0;
}

