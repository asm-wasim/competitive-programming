
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
    Fast_Input
    //READ("3in.txt");
    //WRITE("1out.txt");
    int t,cas=0;
    cin>>t;
    string aa,str,bb="ay";
    getline(cin,str);
    vector <string> vec;
    while(t--) {
        getline(cin,str);
        stringstream s(str);
        string word;
        while(s >> word)
            vec.push_back(word);
        vec[0][0]+=32;
        for(int i=0; i<vec.size(); i++) {
            aa=vec[i][0];
            vec[i].erase(0,1);
            vec[i]+=aa;
            vec[i]+=bb;
            vec[0][0]-=32;
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        vec.clear();
    }
    return 0;
}
