
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
int main() {
    Fast_Input
    int t=1,cas=0;
    //scanf("%d",&t);
    while(t--) {
        int n;
        string str;
        cin>>n>>str;
        int cnt=0;
        for(int i=0; i<n-1; i+=2) {
            if(str[i]==str[i+1]) {
                if(str[i]=='a')
                    str[i]='b';
                else
                    str[i]='a';
                cnt++;
            }
        }
        cout<<cnt<<endl<<str<<endl;
    }
    return 0;
}

