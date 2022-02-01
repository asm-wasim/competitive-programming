
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
    scanf("%d",&t);
    int a,b,c,d,k,x,y,z;
    while(t--) {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);

        if(a%c==0) x=a/c;
        else x= (a/c)+1;

        if(b%d==0) y=b/d;
        else y= (b/d)+1;

        if(x+y<=k) printf("%d %d\n",x,y);
        else printf("-1\n");
    }
    return 0;
}
