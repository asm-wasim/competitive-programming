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
    string str="",temp;
    LL len=1,len2=0,pos=0;
    LL n;
    cin>>n;
    for(int i=1; i<=n; i++){
        stringstream aa;
        aa << i;
        temp= aa.str();
        len2=temp.size();
        len+=len2;
        if(len>=n){
            if(n&1) pos=len-n;
            else pos=len-n-2;
            cout<<temp[pos]<<endl;
            break;
        }
        //str+=temp;
    }
    return 0;
}

