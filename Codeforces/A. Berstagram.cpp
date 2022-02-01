
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
const int mod=1e9+7,mx=1e5+5,lim=25;

int currentPosition[mx],Initial[mx];
PII sequence[mx];

void init(int n){
    for(int i=0; i<=n; i++){
        currentPosition[i]=sequence[i].first=sequence[i].second=Initial[i]=i;
    }
}

int main() {
    Fast_Input
    int t=1,cas=0,n,x;
    //cin>>t;
    while(t--) {

        int n,m;
        cin>>n>>m;
        init(n);

        for(int i=1; i<=m; i++){
            cin>>x;
            int H=currentPosition[x];
            int L=H-1;
            int val= Initial[L];
            if(H>1){
                sequence[x].first=min(L,sequence[x].first);
                sequence[val].second=max(H,sequence[val].second);
                currentPosition[x]=L; currentPosition[val]=H;
                swap(Initial[L],Initial[H]);
            }else{
                sequence[x].first=min(1,sequence[x].first);
            }
        }

        for(int i=1; i<=n; i++){
            cout<<sequence[i].first<<" "<<sequence[i].second<<endl;
        }
    }
    return 0;
}


