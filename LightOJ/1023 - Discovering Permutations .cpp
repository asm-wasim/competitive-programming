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

int main() {
    Fast_Input
    int t=1,cas=0;
    cin>>t;
    map<string,int> Mark;
    while(t--) {
        string s="";
        int n,k;
        cin>>n>>k;
        char ch='A';
        for(int i=0; i<n; i++){
            s+=ch;
            ch++;
        }
        cout<<"Case "<<++cas<<":"<<endl;
        for(int i=0; i<k; i++){
            if(Mark[s]) break;
            cout<<s<<endl;
            Mark[s]=1;
            next_permutation(s.begin(),s.end());
        }
        Mark.clear();
    }
    return 0;
}

