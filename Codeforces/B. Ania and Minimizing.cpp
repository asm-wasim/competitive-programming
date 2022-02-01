
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int aa,bb,cc,dd,xx,yy,zz;

int main() {
    int t=1,cas=0;
    //scanf("%d",&t);
    while(t--) {
        string str;
        int n,k;
        cin>>n>>k>>str;
        int siz=str.size();
        if(siz==1 && k>=1) {
            str[0]='0';
        } else {
            int pos=0;
            if(k>=1 && str[0]>'1') {
                str[0]='1';
                k--;
            }
            pos++;
            while(k>0 && pos<siz) {
                if(str[pos]>'0') {
                    str[pos]='0';
                    k--;
                }
                pos++;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}

