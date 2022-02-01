
#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y)    scanf("%d %d %lld",&x,&y,&z)
#define SFTL(x,y)    scanf("%lld %lld %lld",&x,&y,&z)
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
void print( priority_queue<int, vector<int>, greater<int> >pq) {
    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main() {
    //READ("in.txt");
    Fast_Input
    int x,y,z;
    while(cin>>x && x!=0) {
        priority_queue<int, vector<int>, greater<int> >pq;
        for(int i=0; i<x; i++) {
            cin>>y;
            pq.push(y);
        }
        LL sum=0,ans=0;
        while(pq.size()>1) {
            //print(pq);
            y=pq.top();
            pq.pop();
            z=pq.top();
            pq.pop();
            sum+=y+z;
            //cout<<sum<<endl;
            pq.push(y+z);
        }

        cout<<sum<<endl;
    }
    return 0;
}
