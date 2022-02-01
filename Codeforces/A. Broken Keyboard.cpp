/****************#####  Bismillah-ir-Rahman-ir-Rahim   #####*************
__________________________________________________________________________
######################   A.S.M. Wasim (Exo_Tic)  #########################
######################     Department of CSE     #########################
######################     Leading University    #########################
*************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    Fast_Input
    int t=1,cas=0,n;
    cin>>t;
    string str;
    set <char> res;
    set <char> ::iterator it;
    while(t--) {
        cin>>str;
        int siz=str.size();
        for(int i=0; i<siz; i++) {
            if(str[i]==str[i+1]) {
                i++;
            } else
                res.insert(str[i]);
        }
        for( it=res.begin(); it!=res.end(); it++)
            cout<<*it;
        cout<<endl;
        res.clear();
    }
    return 0;
}


