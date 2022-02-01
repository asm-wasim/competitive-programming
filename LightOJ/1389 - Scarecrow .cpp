
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

int main() {
//    READ("3loji.txt");
    int t=1,cas=0,n;
    scanf("%d",&t);

    char str[105];

    while(t--) {
        scanf("%d %s",&n,str);
        int ans=0,i=0;
        while(i<n){
            if(str[i]=='.'){
                ans++;
                i+=3;
            }else i++;
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

