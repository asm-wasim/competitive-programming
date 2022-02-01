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
    int n,a;
    cin>>n;
    vector <int> math,program,pe;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(a==1) program.PB(i);
        else if(a==2) math.PB(i);
        else pe.PB(i);
    }
    int x=program.size(),y=math.size(),z=pe.size();
    int w=min(x,y);
    w=min(w,z);
    cout<<w<<endl;
    for(int i=0; i<w; i++){
        cout<<math[i]<<" "<<program[i]<<" "<<pe[i]<<endl;
    }
    return 0;
}

