#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
using namespace std;
string s;
ll n, m, k, t;
char jaw[101010];
pair< pair<ll,ll>, pair<ll,ll> > A[101010];

int main() {

    for(ll i = '0'; i <= '9'; i++)
        s += char(i);
    for(ll i = 'a'; i <= 'z'; i++)
        s += char(i);
    for(ll i = 'A'; i <= 'Z'; i++)
        s += char(i);

    cin >> t;
    while(t--) {
        cin >> n >> m >> k;
        ll te = 0, padi = 0;
        char ct;

        for(ll i = 1; i <= n; i++) {

            for(ll j = 1; j <= m; j++) {
                te++;
                cin >> ct;

                ll K = 1;
                if(i % 2 == 1)
                    K = -1;
                if(ct == 'R') {
                    padi++;
                    A[te] = mp(mp(i, j*K), mp(te, 1));
                } else
                    A[te] = mp(mp(i, j*K), mp(te, 0));
            }
        }

        for(int i=1; i<=te; i++)
            cout<<A[i].fi.fi<<" "<<A[i].fi.se<<" "<<A[i].second.fi<<" "<<A[i].second.se<<endl;

        cerr<<"---------"<<endl;

        sort(A+1, A+1+te);

        for(int i=1; i<=te; i++)
            cout<<A[i].fi.fi<<" "<<A[i].fi.se<<" "<<A[i].second.fi<<" "<<A[i].second.se<<endl;

        ll banyak = padi / k;
        ll sisa = padi % k;
        ll udh = 0;
        ll pos = 0;

        for(ll i = 1; i <= te; i++) {
            if(A[i].se.se) {
                if(udh > banyak) {
                    sisa--;
                    udh = 0;
                    pos++;
                } else if(udh == banyak && sisa == 0) {
                    udh = 0;
                    pos++;
                }
                udh++;
            }
            // cout << A[i].se.fi << " " << i << "A\n";
            jaw[A[i].se.fi] = s[pos];
        }
        te = 0;
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= m; j++) {
                te++;
                cout << jaw[te] ;
            }
            cout << "\n";
        }
    }
    return 0;
}
