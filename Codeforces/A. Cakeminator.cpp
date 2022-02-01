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
    int r, c, row[11] = {0}, col[11] = {0};
    string s;
    cin >> r >> c;
    for (int i = 0; i < r; ++i) {
        cin >> s;
        for (int j = 0; j < c; ++j) {
            if (s[j] == 'S') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int cake=0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (row[i] == 0 || col[j] == 0) {
                cake ++;;
            }
        }
    }
    cout << cake << endl;
    return 0;
}
