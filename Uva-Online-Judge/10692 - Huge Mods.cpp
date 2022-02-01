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
LL M;   //Example  (n^p)%m
LL F(LL N,LL P) {
    if(P==0)
        return 1;
    if(P%2==0) {
        LL ret=F(N,P/2);
        return ((ret%M)*(ret%M))%M;
    } else
        return ((N%M)*(F(N,P-1)%M))%M;
}
LL to_int(char ch[]) {
    int siz=strlen(ch);
    LL digit,x,y=10,num=ch[siz-1]-'0';
    for(int i=siz-2; i>=0; i--) {
        digit= ch[i]-'0';
        x= y*digit;
        y*=10;
        num+=x;
    }
    return num;
}

int main() {
    READ("2in.txt");
    int t,cas=0;
    char ch[7];
    LL ans,x,y,z,n;
    LL ar[15];
    while(SF("%s",ch)==1) {
        if(ch[0]=='#')
            break;
        M= to_int(ch);
        SFL(n);
        for(int i=0; i<n; i++) {
            SFL(ar[i]);
        }
        if(n==1) {
            ans=ar[0];
        }
        if(n==2) {
            ans=F(ar[0],ar[1]);
        } else {
            ans= F(ar[n-2],ar[n-1])%M;
            for(int i=n-3; i>=0; i--) {
                ans=F(ar[i],ans)%M;
            }
            //ans=F(ar[0],ans)%M;
        }
        PF("Case #%d: %lld\n",++cas,ans%M);
    }
    return 0;
}

