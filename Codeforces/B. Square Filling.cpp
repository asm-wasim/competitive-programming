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
    int t=50,cas=0;
//    SFI(t);
    int n,m,x,y,z;
    while(t--) {
        SFDI(n,m);
        int A[n+5][m+5],B[n+5][m+5];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>A[i][j];
                B[i][j]=0;
            }
        }
        int k=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int a=i+1,b=j+1;
                if(a>=0 && b>=0 && a<n && b<m && A[i][j]!= B[i][j] && A[i][b]!=B[i][b] && A[a][j]!=B[a][j] && A[a][b]!=B[a][b]){
                    B[i][j]=1;
                    B[i][b]=1;
                    B[a][j]=1;
                    B[a][b]=1;
                }
            }
        }
        bool flag=true;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(A[i][j]!= B[i][j]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            PFI(k);
        else
            PF("-1\n");
    }
    return 0;
}

