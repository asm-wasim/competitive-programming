#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define SFTL(x,y,z)    scanf("%lld %lld %lld",&x,&y,&z)
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
//    READ("in.txt");
    int t,cas=0;
    int n,q, x,y,z;
    while(SFI(n)!=EOF) {
        stack <int> st;
        queue <int> qu;
        priority_queue <int> pq;
        bool is_st=true,is_qu=true, is_pq=true,flag=true;
        int cnt=0;
        for(int i=0; i<n; i++) {
            SFDI(x,y);
            if(x==1) {
                st.push(y);
                qu.push(y);
                pq.push(y);
            } else {
                //cout<<st.top()<<" "<<qu.front() <<" "<<pq.top()<<endl;
                //cout<<is_st<<" "<<is_qu<<" "<<is_pq<<endl;
                if(st.empty() || st.top() != y) {
                    is_st =false;
                } else {
                    st.pop();
                }
                if(qu.empty() || qu.front()!=y ) {
                    is_qu= false;
                } else {
                    qu.pop();
                }
                if(pq.empty() || pq.top() != y) {
                    is_pq=false;
                } else {
                    pq.pop();
                }
            }
        }
        if(is_st && !is_qu && !is_pq) {
            PF("stack\n");
        }  else if(!is_st && is_qu && !is_pq) {
            PF("queue\n");
        } else if(!is_st && !is_qu && is_pq) {
            PF("priority queue\n");
        } else if(!is_st && !is_qu && !is_pq) {
            PF("impossible\n");
        } else {
            PF("not sure\n");
        }

    }
    return 0;
}

