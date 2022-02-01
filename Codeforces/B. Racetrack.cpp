
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
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input    ios_base :: sync_with_stdio(false);  cin.tie(NULL);
typedef pair<int,int> PII;
const int mod=1000007;
const int mx=1000005;
int lcm(int a, int b)
 {
    return (a*b)/__gcd(a, b);
 }
int main() {
    Fast_Input
    int a,b;
    cin >> a >> b;
    cout<<lcm(a,b)<<endl;
    return 0;
}
