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

/*void solve(){
    int n,maxx=0;
    scanf("%d",&n);
    int ar[n+5];
    for(int i=1; i<=n; i++) scanf("%d",&ar[i]);

    int tuna,eel,i=1;
    vector <int> segment;
    while(i<=n){
        tuna=eel=0;
        if(ar[i]==1){
            tuna++;
            i++;
            while(i<=n && ar[i]==1){
                tuna++; i++;
            }
            segment.push_back(tuna);
        }else{
            eel++;
            i++;
            while(i<=n && ar[i]==2){
                eel++; i++;
            }
            segment.push_back(eel);
        }
    }
    int siz=segment.size()-1;
    for(int j=0; j<siz; j++){
        maxx= max(maxx,min(segment[j],segment[j+1]));
    }
    printf("%d\n",2*maxx);
}*/

void solve(){
    int x,n; scanf("%d",&n);
    int maxx=0,tuna=0,eel=0,prev=5;
    for(int i=1; i<=n; i++){
        scanf("%d",&x);
        if(x != prev){
            if(x==1) tuna=0,tuna++;
            else eel=0,eel++;
            prev=x;
        }else{
            if(x==1) tuna++;
            else eel++;
        }
        //cout<<tuna<<" "<<eel<<" "<<x<<endl;
        maxx=max(maxx,min(eel,tuna));
    }
    printf("%d\n",2*maxx);
}

int main() {
#ifndef Exo_Tic
    //freopen("3in.txt", "r", stdin);  freopen("3out.txt", "w", stdout);
#endif

    int t=1,cas=0;
    ///scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
