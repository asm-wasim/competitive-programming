
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
#define vsort(s) sort(s.begin(), s.end())
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    IOS
    int n;
    cin>>n;
    set <string> q;
    string str;
    while(n--) {
        cin>>str;
        vsort(str);
        // cout<<str<<" 1"<<endl;
        str.erase(unique(str.begin(),str.end()),str.end());
        //cout<<str<<" 2"<<endl;
        q.insert(str);
    }
    cout<<q.size()<<endl;
    return 0;
}


