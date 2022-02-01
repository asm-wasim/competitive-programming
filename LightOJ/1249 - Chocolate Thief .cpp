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
///----
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///----
const int mod=1e9+7,mx=1e6+5,lim=25;
int N,M,u,v,w;
int main() {
    //READ("2in.txt");
//    WRITE("3out.txt");
    int T,cas=0;
    SFI(T);
    vector < pair<int,string> >vec;
    string ss;
    while(T--) {
        SFI(N);
        for(int i=0; i<N; i++) {
            cin>>ss>>u>>v>>w;
            w= u*v*w;
            vec.PB(MP(w,ss));
        }
        SORT(vec);
        int len=vec.size();
        PF("Case %d: ",++cas);
        if(vec[0].FV==vec[len-1].FV) {
            PF("no thief\n");
        } else {
            cout<<vec[len-1].SV<<" took chocolate from "<<vec[0].SV<<endl;
        }
        vec.clear();
    }
    return 0;
}
