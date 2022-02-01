

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main()
{
    READ("3in.txt");
    int a,b,c,m,n,p,q,x,y,z;
    vector<int>ve;
    scanf("%d ",&n);
    scanf("%d ",&c);
    scanf("%d ",&x);

    for(int i=2; i<n; i++)
    {
        scanf("%d ",&c);
        cout<<x<<" "<<c<<endl;
        if(x!=c)
            x=__gcd(x,c);
    }
    ve.push_back(x);
    for(int i=1; i<n; i++)
    {
        scanf("%d ",&x);
        for(int j=1; j<n; j++)
        {
            scanf("%d ",&c);
            cout<<x<<" "<<c<<endl;
            if(c!=0 && x!=c)
                x=__gcd(x,c);
            cout<<x<<endl;
        }
        ve.push_back(x);
        x=0;
    }
//    cout<<ve.size()<<endl;
    for(int i=0; i<ve.size(); i++)
        cout<<ve[i]<<" ";
    cout<<endl;
    return 0;
}
