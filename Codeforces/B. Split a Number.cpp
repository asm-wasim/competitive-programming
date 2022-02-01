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
LL sum(string str, int pos1,int pos2) {
    LL ans=0,temp=0;

    cout<<temp<<endl;
    return temp;
}
int main() {
    string str;
    LL l;
    while(cin>>l) {
        cin>>str;
        int pos1=(l/2);
        if(str[pos1]=='0') {
            while(str[pos1]=='0') {
                pos1++;

            }
        }
        int pos2=pos1+1;
        LL a=sum(str,0,pos1)+ sum(str,pos2,l);
        LL b=sum(str,0,pos1+1)+ sum(str,pos2+1,l);
        cout<<min(a,b)<<endl;

    }
    return 0;
}
