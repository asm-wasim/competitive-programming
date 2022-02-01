
#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define MCI map<char,int>
#define MII map<int,int>
#define SII set<int,int>
#define PII pair<int,int>
const int mod=1e6+7;
const int mx=1e6+5;
int main() {
    int a;
    cin>>a;
    if((a>=10 && a<=29 && a!=12) || (a>=70 && a<=79) || (a>=90 && a<=99)) {
        cout<<"NO"<<endl;

    } else if(a%10==1 || a%10==7 || a%10==9)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}


