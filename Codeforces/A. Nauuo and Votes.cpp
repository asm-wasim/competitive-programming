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
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        char ch;
        if(a==b){
            if(c==0) ch='0';
            else   ch='?';;
        }else if(a<b){
            if(a+c < b) ch='-';
            else ch='?';
        }else{
            if(a>b+c) ch='+';
            else ch='?';
        }
        cout<<ch<<endl;
    }
    return 0;
}

