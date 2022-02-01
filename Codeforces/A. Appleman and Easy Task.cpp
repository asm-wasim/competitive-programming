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
    int n;
    cin >> n;
    char board[n+2][n+2];
    bool flag = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (i - 1 >= 0 and board[i - 1][j] == 'o')
                c++;
            if (i + 1 < n and board[i + 1][j] == 'o')
                c++;
            if(j - 1 >= 0 and board[i][j - 1] == 'o')
                c++;
            if(j + 1 < n and board[i][j + 1] == 'o')
                c++;
            if (c % 2 == 1)
                flag = false;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

