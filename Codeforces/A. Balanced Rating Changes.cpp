

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

    int t=1,cas=0;
//    scanf("%d",&t);
    while(t--) {
        int n,x,y;
        int sum=0;
        scanf("%d",&n);

        int ok= 0;
        for(int i=0; i<n; i++) {
            scanf("%d",&x);

            if(abs(x)%2==0) {
                y= x/2;
                printf("%d\n",y);
            } else {
                if(ok==1) {
                    ok=0;
                    y= (int) ceil((double) x/2.0);
                } else {
                    ok=1;
                    y=(int) floor((double) x/2.0);
                }
                printf("%d\n",y);
            }
        }
    }
    return 0;
}
