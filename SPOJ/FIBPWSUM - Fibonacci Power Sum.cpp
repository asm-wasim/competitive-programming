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
const int mod=1000000007;
const int mx=1e6+5;
const int pre_size= 1e9+2;
vector <int> fibo;
vector <LL> sum;
void fibo_series(){
    fibo.PB(0);
    fibo.PB(1);
    sum.PB(0);
    sum.PB(1);
    int result;
    for(int i=2; i<pre_size; i++){
        result=(fibo[i-2]+fibo[i-1])%mod;
        fibo.PB(result);
        sum.PB(sum[i-1]+result);
    }
    for(int i=0; i<pre_size; i++)
        cout<<fibo[i]<<" ";
}
int main() {
    int t;
    SF("%d",&t);
    fibo_series();
    while(t--){
        int n,m;
        SF("%d %d",&n,&m);
        PF("%d\n",sum[m]-sum[n-1]);
    }
    return 0;
}
