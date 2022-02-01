
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
vector<string> split(string str, char delimiter) {
    vector<string> internal;
    stringstream ss(str);
    string tok;
    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }
    return internal;
}
int main() {
    IOS

    //READ("a.txt");
    string s;
    vector <string> sep;
    vector <string> :: iterator it;
    while(getline(cin,s)) {
        if(s=="*")
            break;
        transform(s.begin(),s.end(),s.begin(),:: tolower);
        sep=split(s,' ');
        it=sep.begin();
        char ch= it[0][0];
        it++;
        int flag=0;
        while(it != sep.end()) {
            if(it[0][0] != ch) {
                flag=1;
                break;
            }
            it++;
        }
        if(flag==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

