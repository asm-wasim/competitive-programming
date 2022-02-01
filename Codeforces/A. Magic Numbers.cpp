
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
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input    ios_base :: sync_with_stdio(false);  cin.tie(NULL);
typedef pair<int,int> PII;
const int mod=1000007;
const int mx=1000005;
int main() {
    string str;
    cin>>str;
    for(int i=0; str[i]; i++) {
        if(str[i]=='1' && str[i+1] !='4') {
            //cout<<i<<" ";
            continue;
        } else if(str[i]=='1' && str[i+1]=='4' && str[i+2] !='4') {
            i++;
            //cout<<i<<" ";
        } else if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4') {
            i+=2;
            //cout<<i<<" ";
        } else if(str[i] != '1' ) {
            cout<<"NO"<<endl;
            //cout<<i<<" ";
            return 0;
        }

    }
    cout<<"YES"<<endl;
    /*int i=0;
    while(str.size()) {
        if(str[i]=='1' && str[i+1] !='4')
            str.erase(i,1);
        else if(str[i]=='1' && str[i+1]=='4' && str[i+2] !='4') {
            str.erase(i,2);
        } else if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4') {
            str.erase(i,3);
        } else {
            break;
            //i++;
        }
        //cout<<str<<" "<<i<<endl;
    }
    if(str.size())
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;*/
    return 0;
}
