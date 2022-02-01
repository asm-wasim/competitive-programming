
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

int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    getchar();
    string str,ss;
    while(t--) {
        cin>>str;
        ss= str;
        reverse(str.begin(),str.end());
        printf("Case %d: ",++cas);
        if(str==ss)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

