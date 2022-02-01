
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    Fast_Input
//    READ("3in.txt");
    int t=1,cas=0;
    cin>>t;
    cin.ignore();
    string str,ss;
    while(t--) {
        getline(cin,str);
        getline(cin,ss);
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
        SORT(str);
        SORT(ss);
        reverse(str.begin(),str.end());
        reverse(ss.begin(),ss.end());
        int siz= min(str.size(),ss.size());
        bool flag=true;
        for(int i=0; i<siz && str[i]; i++) {
            if(str[i]!=ss[i]) {
                flag=false;
                break;
            }
            if(str[i]==' ')break;
        }
        if(flag)
            cout<<"Case "<<++cas<<": Yes"<<endl;
        else
            cout<<"Case "<<++cas<<": No"<<endl;
    }
    return 0;
}

