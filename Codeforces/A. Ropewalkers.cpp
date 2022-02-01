#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
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
int main() {
    Fast_Input
    int a[3],d;
    while(cin>>a[0]>>a[1]>>a[2]>>d) {
        sort(a,a+3);
        int cnt=0;
        if(d > a[1]-a[0]) {
            cnt+= d-(a[1]-a[0]);
        }
        if(d > a[2]-a[1]) {
            cnt+= d-(a[2]-a[1]);
        }
        cout<<cnt<<endl;
        return 0;
    }
}
