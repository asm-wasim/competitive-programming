
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
    int t=1,cas=0;
    int road,num,digit,sum;
    while(scanf("%d %d",&road,&num)==2) {
        if(road+num==0) break;
        digit=sum=0;
        sum+=num;
        while(digit<=27){
            if(sum>=road){
                break;
            }
            digit++;
            sum+=(num);
        }
        printf("Case %d: ",++cas);
        if(digit<27)
            printf("%d\n",digit);
        else
            printf("impossible\n");
    }
    return 0;
}
