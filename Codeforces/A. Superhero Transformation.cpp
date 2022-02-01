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
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
bool isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return 1;
    return 0;
}
void solve(){
    char flash[1005], arrow[1005];
    scanf("%s %s",flash,arrow);
    int f= strlen(flash) , a=strlen(arrow);
    bool ok=true;
    if(f!=a){
        ok=false;
    }else{
        for(int i=0; i<f; i++){
            bool v1=isVowel(flash[i]);
            bool v2=isVowel(arrow[i]);
            if((v1 && !v2)||(!v1 && v2)){
                ok=false; break;
            }
        }
    }
    if(ok) printf("YES\n");
    else   printf("NO\n");
}

int main() {
#ifndef Exo_Tic
    //freopen("3in.txt", "r", stdin);  freopen("3out.txt", "w", stdout);
#endif

    int t=1,cas=0;
   /// scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
