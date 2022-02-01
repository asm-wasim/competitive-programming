

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
    Fast_Input
    int t=1,cas=0;
//    scanf("%d",&t);
    //int a,b,c,m,n,p,q,x,y,z;
    int a,o,n,e,z,r;
    string str;
    while(t--)
    {
        o=n=e=z=r=0;
        cin>>a;
        cin>>str;
        int siz=str.size();
        for(int i=0; i<siz; i++)
        {
            if(str[i]=='o')
                o++;
            else if(str[i]=='n')
                n++;
            else if(str[i]=='e')
                e++;
            else if(str[i]=='z')
                z++;
            else if(str[i]=='r')
                r++;
        }
        int one= min(o,min(n,e));
        o-=one;
        n-=one;
        e-=one;
        int zero= min(min(z,e),min(r,o));
        for(int i=0; i<one; i++)
            cout<<"1"<<" ";
        for(int j=0; j<zero; j++)
            cout<<"0"<<" ";
        cout<<endl;
    }
    return 0;
}
