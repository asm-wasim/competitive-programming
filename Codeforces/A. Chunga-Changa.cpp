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
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=25;
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
int main() {
    LL x,y,z;
    LL ans,rem1,rem2,temp;
    while(cin>>x>>y>>z){
        temp=0;
        ans=(x/z)+(y/z);
        rem1=x%z;
        rem2=y%z;
        if(rem1 >= rem2 && (rem1+rem2) >= z){
            temp=z-rem1;
            ans+=(rem1+rem2)/z;
        } else if(rem1 < rem2 && (rem1+rem2) >= z){
            temp=z-rem2;
            ans+=(rem1+rem2)/z;
        }
        cout<<ans<<" "<<temp<<endl;
         return 0;
    }
    //return 0;
}
