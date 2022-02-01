
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    int t=1,cas=0;
//    scanf("%d",&t);
    while(t--) {
        int n,k;
        scanf("%d %d",&n,&k);
        map<int,int> Mark;
        deque <int> de;
        int x;
        for(int i=0; i<n; i++){
            scanf("%d",&x);
            if(Mark[x]==0){
                if(de.size()==k){
                    Mark[de.back()]=0;
                    de.pop_back();
                }
                de.push_front(x);
                Mark[x]++;
            }
        }
        printf("%d\n",de.size());
        while(!de.empty()){
            printf("%d ",de.front());
            de.pop_front();
        }
        puts("");
    }
    return 0;
}

