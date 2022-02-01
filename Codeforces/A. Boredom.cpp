
#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int main() {
    int t=10,cas=0;
//    SFI(t);
    int x,y,z;
    while(t--) {
        map<int,int> M;
        set<int> S;
        int n;
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>x;
            M[x]++;
            S.insert(x);
        }
        auto it=S.begin();
        it++;
        auto it2=S.end();
        it2--;
//        for(auto i=S.begin(); i!=S.end(); i++){
//            x=*i;
//            cout<<M[x]<<" ";
//        }
//        cout<<endl;
        int sum=0;
        for( ; it!=it2; it++) {
            x=*it;
            y= x -1;
            z= x +1;
            if(x > 0 ) {
                sum+=x;
                M[x]--;
                M[y]=0;
                M[z]=0;
            }
        }
//        for(auto i=S.begin(); i!=S.end(); i++){
//            x=*i;
//            cout<<M[x]<<" ";
//        }
//        cout<<endl;
        for(auto i=S.begin(); i!=S.end(); i++) {
            x=*i;
            sum+= (x*M[x]) ;
        }
        cout<<sum<<endl;
    }
    return 0;
}
