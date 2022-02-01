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
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2) {
        if (abs(x1 - x2) != abs(y1 - y2)) {
            printf("-1\n");
        } else {
            printf("%d %d %d %d\n", x1, y2, x2, y1);
        }
    } else if (y1 == y2) {
        int dif = abs(x1 - x2);
        printf("%d %d %d %d\n", x1, y1 + dif, x2, y2 + dif);
    } else if (x1 == x2) {
        int dif = abs(y1 - y2);
        printf("%d %d %d %d\n", x1 + dif, y1, x2 + dif, y2);
    } else {
        printf("-1\n");
    }

    return 0;
}
