
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
    READ("3in.txt");
    WRITE("3out.txt");

    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll ar[n+3];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        ll result=ar[0]*ar[n-1];
        //cout<<ar[0]<<" "<<ar[n-1]<<" "<<result<<endl;
        int j=0,k=n-1;
        ll x=result;
        while(j<=k) {
            if(ar[j]*ar[k]!=result) {
                x=-1;
                break;
            } else {
                j++;
                k--;
            }
        }

        cout<<x<<endl;
    }

    return 0;
}


