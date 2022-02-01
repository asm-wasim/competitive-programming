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
    int t=1,cas=0,n;
    scanf("%d",&t);
    while(t-- && scanf("%d",&n)==1) {
        int ar[n+6];
        for(int i=0; i<n; i++) scanf("%d",&ar[i]);
        sort(ar,ar+n);
        int ans=1;
        for(int i=0; i<n-1; i++){
            if(ar[i+1]-ar[i]==1) { ans=2; break;}
        }
        printf("%d\n",ans);
    }
    return 0;
}

