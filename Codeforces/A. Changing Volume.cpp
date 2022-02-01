#include <bits/stdc++.h>
using namespace std;
#define LL           long long
#define ULL          unsigned long long
#define PII          pair<int,int>
#define PII          pair<int,int>
#define PLL          pair<LL,LL>
#define SORT(x)      sort(x.begin(),x.end())
#define SORTD(x)     sort(x.rbegin(),x.rend())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const LL mod=1e9+7,INF=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0,N;

int main()
{
    Fast_Input
    cin>>testCase;

    while(testCase--)
    {
        LL a,b;
        int cnt=0;
        cin>>a>>b;
        if(a==b)
            cnt=0;
        else
        {
            LL dif= abs(a-b);
            cnt+=(dif/5),dif%=5;
            cnt+= (dif/2),dif%=2;
            cnt+=dif;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


