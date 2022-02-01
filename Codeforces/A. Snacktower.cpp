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

bool ar[100005];
int main() {
    int t=1,cas=0;
//    scanf("%d",&t);
    while(t--) {
        int n,x;
        scanf("%d",&n);
        int maxx=n;
        for(int i=0; i<n; i++) {
            scanf("%d",&x);
            ar[x]=1;
            while(ar[maxx]) {
                printf("%d ",maxx);
                maxx--;
            }
            puts("");
        }
    }
    return 0;
}

//int main() {
//    int t=1,cas=0;
////    scanf("%d",&t);
//    while(t--) {
//        int n,x;
//        priority_queue<int> pq;
//        scanf("%d",&n);
//        int maxx=n;
//        for(int i=0; i<n; i++) {
//            scanf("%d",&x);
//            pq.push(x);
//            if(maxx== pq.top()) {
//                while(!pq.empty()) {
//                    if(pq.top()==maxx) {
//                        printf("%d ",maxx);
//                        pq.pop();
//                        maxx--;
//                    } else
//                        break;
//                }
//            }
//            puts("");
//        }
//    }
//    return 0;
//}

