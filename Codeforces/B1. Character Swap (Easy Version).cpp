
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
int t=1,cas=0;

int main() {
    Fast_Input

    cin>>t;
    string s1,s2;
    while(t--) {
        int n,cnt=0;
        cin>>n>>s1>>s2;
        string t1=s1,t2=s2;
        vector<int> pos;
        for(int i=0; cnt<=4 && i<n; i++) {
            if(s1[i]!= s2[i]) {
                cnt++;
                pos.push_back(i);
            }
        }
        if(pos.size()>=2)
        swap(t1[pos[0]],t2[pos[1]]);

        if(t1==t2 || s1==s2)
            cout<<"Yes"<<endl;
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}


