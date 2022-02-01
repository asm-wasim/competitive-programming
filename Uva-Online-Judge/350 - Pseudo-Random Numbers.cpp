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
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    int t=1,cas=0;
    LL Z,I,M,L,cnt,x;
    map<LL,int> isAvailable;
    while(scanf("%lld %lld %lld %lld",&Z,&I,&M,&L)==4) {
            if(Z+I+M+L==0) break;
            cnt=0;
            L= (((Z%M)*(L%M))%M + (I%M)) %M;
            while(!isAvailable[L]){
                isAvailable[L]++;
                cnt++;
                L= (((Z%M)*(L%M))%M + (I%M)) %M;
            }
            printf("Case %d: %lld\n",++cas,cnt);
            isAvailable.clear();
    }
    return 0;
}

