
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

string SUM(string a, string b) {
    if(a.size()<b.size())
        swap(a,b);

    int len1=a.size(),len2=b.size(),carry=0,sum;
    string ans="";

    //reverse(a.begin(),a.end());
    //reverse(b.begin(),b.end());

    for(int i=0; i<len2; i++) {
        sum= (a[i]-'0')+(b[i]-'0')+carry;
        ans+= ((sum % 10)+'0');
        carry=sum/10;
    }

    for(int j=len2; j<len1; j++) {
        sum= (a[j]-'0')+carry;
        ans+= ((sum % 10)+'0');
        carry=sum/10;
    }

    if(carry>0)
        ans+=(carry+'0');
    //reverse(ans.begin(),ans.end());
    return ans;
}


int main() {
    Fast_Input
    int t=1,cas=0,n;
    cin>>t;
    string a,b;
    while(t--) {
        cin>>a>>b;
        string ans=SUM(a,b);
        ans.erase(0, ans.find_first_not_of('0'));
        cout<<ans<<endl;
    }
    return 0;
}


