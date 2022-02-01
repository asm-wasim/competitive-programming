
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
const LL mod=1e9+7,INF=1e18,mx=1e5+5,lim=25;
int testCase=1,cas=0,N,M;

int main() {
    Fast_Input
    cin>>testCase;
    while(testCase--) {
        cin>>N>>M;

        LL ar[N+5];
        for(int i=0; i<N; i++) {
            cin>>ar[i];
        }
        if(M<N || N==2)
            cout<<-1<<endl;
        else {
            LL cost=0,cnt=0;

            vector <PII> vec;


            for(int i=0; i<N-1; i++) {
                cost+=(ar[i]+ar[i+1]);
                vec.push_back({i+1,i+2});
            }
            cost+=(ar[0]+ar[N-1]);
            vec.push_back({1,N});


            cout<<cost<<endl;

            for(int i=0; i<vec.size(); i++)
                cout<<vec[i].first<< " "<<vec[i].second<<endl;


        }
    }
    return 0;
}

