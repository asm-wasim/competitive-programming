
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
    int t=1,cas=0;
    double d,v,u;
    scanf("%d",&t);
    while(t-- && scanf("%lf %lf %lf",&d,&v,&u)==3) {
        if(u<=v || v==0 || u==0) {
            printf("Case %d: can't determine\n",++cas);
        } else {
            double t1= d/u;
            double t2= d/(sqrt(u*u-v*v));
            printf("Case %d: %0.3lf\n",++cas,t2-t1);
        }
    }
    return 0;
}

