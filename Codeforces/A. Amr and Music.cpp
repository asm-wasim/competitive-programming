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
    //scanf("%d",&t);
    vector <PII> ar;
    vector <int> ans;
    while(t--) {
        int n,k,sum=0,x;
        scanf("%d %d",&n,&k);
        for(int i=1; i<=n; i++){
            scanf("%d",&x);
            ar.push_back({x,i});
        }
        sort(ar.begin(),ar.end());
        int cnt=0;
        for(int i=0; i<n; i++){
            sum+=ar[i].first;
            if(sum<=k){
                cnt++;
                ans.push_back(ar[i].second);
            }
        }
        printf("%d\n",cnt);
        for(int i=0; i<ans.size(); i++)
            printf("%d ",ans[i]);
        puts("");
        //ar.clear();
        //ans.clear();
    }
    return 0;
}

