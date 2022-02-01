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

int main() {
#ifndef Exo_Tic
    //freopen("2in.txt", "r", stdin);
    //freopen("test.out", "w", stdout);
#endif
    int t=1,cas=0;
//    scanf("%d",&t);
    while(t--) {
        int n,x;
        scanf("%d",&n);
        int ar[n+5],ans=0,left=0,right=n+1,prev=0,current=0;
        int posx[n+5]= {0};
        int posy[n+5]= {0};

        for(int i=1; i<=n; i++) {
            scanf("%d",&ar[i]);
            posx[ar[i]]=i;
        }

        bool ok=true;
        for(int i=1; i<=n; i++) {
            scanf("%d",&x);
            posy[x]=i;
            if(i != posx[x]) {
                ok=false;
            }
        }

        if(ok)
            printf("0\n");
        else {
            current= posy[ar[1]];
            ans+= (current-1);
            left= current;
            prev = current;

            for(int i=2; i<=n; i++) {
                if(posy[ar[i]]>left && posy[ar[i]]<right) {

                    current = posy[ar[i]]-1;
                    ans += (current-prev);
                    left = current;
                    prev += (current-prev+1);

                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}

