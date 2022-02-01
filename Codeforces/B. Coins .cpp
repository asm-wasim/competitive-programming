
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    int t=1,cas=0,n;
    //cin>>t;
    while(t--) {
        char ch[5];
        int a[4]= {0};
        for(int i=0; i<3; i++) {
            cin>>ch;
            int l= ch[0]-'A';
            int r= ch[2]-'A';
            if(ch[1]=='<')
                a[r]++;
            else
                a[l]++;
        }

        if((a[0]==a[1]) || (a[0]==a[2]) || (a[1]==a[2]))
            cout<<"Impossible"<<endl;
        else {
            ch[a[0]]= 'A';
            ch[a[1]]= 'B';
            ch[a[2]]= 'C';
            cout<<ch<<endl;
        }

    }
    return 0;
}


