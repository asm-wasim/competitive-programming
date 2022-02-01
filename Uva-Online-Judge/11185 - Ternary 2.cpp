
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
string ternary(int n) {
    string str="";
    int remin;
    while(n>0) {
        remin=n%3;
        str+=(remin+'0');
        n/=3;
    }
    reverse(str.begin(),str.end());
    return str;
}
int main() {
    IOS
    //READ("a.txt");
    //WRITE("b.txt");
    int n;
    while(cin>>n && n >=0) {
        if(n==0)
            cout<<"0"<<endl;
        else
            cout<<ternary(n)<<endl;
    }
    return 0;
}


