
#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
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
#define PII pair<int,int>
bool check(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%4==0)
        return true;
    return false;
}
int main() {
    int n;
    cin>>n;
    for(int i=n; ; i++) {
        if(check(i)) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
