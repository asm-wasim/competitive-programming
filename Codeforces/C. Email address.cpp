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

const int maxn=105;
char a[maxn],ans[maxn];
int main() {
    scanf("%s",a+1);
    int l=strlen(a+1),cnt=1;
    bool att=0;
    ans[1]=a[1];
    for(int i=2; i<=l; i++) {
        if (i+2<l && a[i]=='d' && a[i+1]=='o' && a[i+2]=='t')
            ans[++cnt]='.',i+=2;
        else if (i+1<l && a[i]=='a' && a[i+1]=='t' && att==0)
            ans[++cnt]='@',i++,att=1;
        else
            ans[++cnt]=a[i];
    }
    printf("%s",ans+1);
    return 0;
}




//int main() {
//    Fast_Input
//    int t=1,cas=0;
//    //scanf("%d",&t);
//    while(t--) {
//        string str,ans="";
//        cin>>str;
//        int siz= str.size();
//        int dot=0, att=0,k=0,p3=0,p2=0,aatt=0;
//        for(int i=0; i<siz-3; i++) {
//            if(str[i]=='d' && str[i+1]=='o' && str[i+2]=='t') {
//                dot++;
//                if(i+1==siz-3 || i+2==siz-3) p3=1;
//                if(i+1==siz-2 || i+2==siz-2) p2=1;
//                if(dot>0 && i>0) {
//                    ans+='.';
//                } else {
//                    ans+="dot";
//                }
//                i+=2;
//            } else if(str[i]=='a' && str[i+1]=='t' ) {
//                att++;
//                if(i+1==siz-3) p3=1;
//                if(att>0 && i>0 && k==0) {
//                    ans+='@'; k=1;
//                } else {
//                    ans+="at";
//                }
//                i++;
//            } else {
//                ans+=str[i];
//            }
//        }
//        if(str[siz-3]=='a' && str[siz-2]=='t' && k==0) {
//            ans+="@";
//            ans+=str[siz-1];
//        } else {
//            if(p3==0) ans+=str[siz-3];
//            if(p2==0) ans+=str[siz-2];
//            ans+=str[siz-1];
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}

