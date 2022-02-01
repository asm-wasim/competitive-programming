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
    MII vis;
    int q;
    cin>>q;
    while(q--) {
        LL n;
        cin>>n;
        bool flag =false;
        int cnt=0;
        while(n>=1) {
            if(n==1) {
                break;
            } else if(vis[n]>1) {
                break;
            } else if(n%2==0) {
                n/=2;
            } else if(n%3==0) {
                n*=2;
                n/=3;
            } else if(n%5==0) {
                n*=4;
                n/=5;
            } else
                break;
            vis[n]++;
            cnt++;
            //cout<<n<<endl;
        }
        if(n==1)
            cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;
        vis.clear();
    }
    return 0;
}
