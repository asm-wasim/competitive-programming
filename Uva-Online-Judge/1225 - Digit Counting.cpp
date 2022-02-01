/****************#####  Bismillah-ir-Rahman-ir-Rahim   #####*************
__________________________________________________________________________
######################   A.S.M. Wasim (Exo_Tic)  #########################
######################        LU-CSE-47          #########################
*************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
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
    int t=1,cas=0,x,n,r;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int F[11]={0};
        for(int i=1; i<=n; i++){
            x=i;
            while(x>0){
                r= x%10;
                F[r]++;
                x/=10;
            }
        }
        for(int i=0; i<9; i++)
            printf("%d ",F[i]);
        printf("%d\n",F[9]);
    }
    return 0;
}

