
#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define ld long double
#define fv first
#define sv second
#define pb push_back
#define mp make_pair
#define in insert
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    IOS
    ll n,cnt=1;
    cin>>n;
    if(n<10) {
        cout<<9<<endl;
        return 0;
    }
    if(n%10==0) {
        cnt++;
        n++;
    }
    while(n>1) {
        if(n%10==0) {
            while(n%10 == 0) {
                n/=10;
            }
        }
        if(n<10) {
            cnt+=8;
            break;
        } else {
            n++;
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}


