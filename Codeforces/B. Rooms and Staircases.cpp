/****************#####  Bismillah-ir-Rahman-ir-Rahim   #####*************
__________________________________________________________________________
######################   A.S.M. Wasim (Exo_Tic)  #########################
######################        LU-CSE-47          #########################
*************************************************************************/

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
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

void solve() {
    string str;
    int n;
    cin>>n>>str;
    bool ok=false;
    int pos1=0,pos2=0;
    int ans=n,temp;
    for(int i=0; i<n; i++) {
        if(str[i]=='1') {
            temp= 2*(max(i+1,n-i));
            ans= max(ans,temp);
        }
    }
    cout<<ans<<endl;
}

int main() {
#ifndef Exo_Tic
    //freopen("3in.txt", "r", stdin); freopen("test.out", "w", stdout);
#endif
    Fast_Input
    int t=1,cas=0;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}

