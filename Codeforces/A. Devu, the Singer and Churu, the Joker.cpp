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
    int n,d,a,song_time=0;
    cin>>n>>d;
    for(int i=0; i<n; i++) {
        cin>>a;
        song_time+=a;
    }
    if(song_time+10*(n-1) <= d) {
        cout<<(d-song_time)/5<<endl;
    } else
        cout<<-1<<endl;
    return 0;
}

