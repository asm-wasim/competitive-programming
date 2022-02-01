
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
const int mod=1e9+7,inf=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0,N;

int main() {
    Fast_Input
    //cin>>testCase;
    while(testCase--) {
        cin>>N;
        map<int,int> myMap,F;
        int day=0;
        vector <int> eve;
        int a[N+5];
        for(int i=0; i<N; i++){
            cin>>a[i];
        }
        int ok=1,cnt=0,posi=0;
        LL total=0;

        for(int i=0; i<N; i++){
            cnt++;
            if(a[i]>0){
                posi++;
                total+=a[i];
                myMap[a[i] ]++;
                if(myMap[a[i] ]>1){ ok=0; break;}
            }else{
                if(myMap[abs(a[i])]==0){ ok=0; break;}
                myMap[abs(a[i])]--;
                F[abs(a[i])]++;
                total+=a[i];
                posi--;
                if(posi==0){
                    day++;
                    for(map<int,int>::iterator it=F.begin(); it!=F.end(); it++){
                        if(it->second>1) {ok=0; break; }
                    }

                    eve.push_back(cnt);
                    F.clear();
                    cnt=0;
                }
            }
        }
        if(ok && total==0){
            cout<<day<<endl;
            for(int i=0; i<eve.size(); i++)
                cout<<eve[i]<<" ";
            cout<<endl;

        }else cout<<-1<<endl;
    }
    return 0;
}

