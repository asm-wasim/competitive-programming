
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
    int n,t;
    cin>>n>>t;
    int a[n+2];
    a[0]=0;
    for(int i=1; i<n; i++) {
        cin>>a[i];
    }
    bool flag=false;
    int temp=1;
    while(temp<n) {
        temp+=a[temp];
        if(temp==t) {
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


