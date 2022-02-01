

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
    int t=1,cas=0;
    //scanf("%d",&t);
    string str;
    LL k,sum,lf,rg,cnt,siz,pos,lastVal;
    while(t--) {
        cin>>k;
        cin>>str;
        siz=str.size();
        if(k>siz) {
            sum=0;
        } else {
            pos=-1;
            sum=0;
            while(pos<siz) {
                lastVal=0;
                lf=pos+1;
                for(int j=lf; j<siz; j++) {
                    if(str[j]=='1')
                        lastVal++;
                    if(lastVal==k)
                        sum++;
                    else if(lastVal>k)
                        break;
                }
                pos++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
