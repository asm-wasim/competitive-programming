
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
    int n;
    string str;
    cin>>n;
    cin>>str;
    int cnt=0,i;
    for(i=0; i<n; i++)
        if(str[i]=='+')
            break;
    for(; i<n; i++ ) {
        if(str[i]=='+')
            cnt++;
        else {
            cnt--;
            if(cnt<0)
                cnt=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


