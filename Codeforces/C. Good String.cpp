
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
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,cnt=0;
    cin>>n;
    string str;
    cin>>str;

    for(int i=1; ss[i]; ) {
        if(ss[i]==ss[i+1]) {
            cnt++;
            ss.erase(i,1);
        } else
            i+=2;
        cout<<ss<<" "<<i<<endl;
    }
    cout<<cnt<<endl<<ss<<endl;
    return 0;
}


