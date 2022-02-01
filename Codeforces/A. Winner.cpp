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

void solve(){
    map<string,int> Res1,Res2;
    int n; cin>>n;
    string name[n+5]; int score[n+5];

    for(int i=0; i<n; i++){
        cin>>name[i]>>score[i];
        Res1[name[i]]+=score[i];
    }

    int maxx=0;
    for(int i=0; i<n; i++){
        if(Res1[name[i]]>maxx) maxx=Res1[name[i]];
    }
    string winer;
    for(int i=0; i<n; i++){
        Res2[name[i]]+=score[i];
        if(Res2[name[i]]>=maxx && Res1[name[i]]==maxx){
            winer=name[i]; break;
        }
    }
    cout<<winer<<endl;
}

int main() {
#ifndef Exo_Tic
    //freopen("3in.txt", "r", stdin);  freopen("3out.txt", "w", stdout);
#endif
    Fast_Input
    int t=1,cas=0;
    //scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
