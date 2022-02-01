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

int main() {
    Fast_Input
    cin>>testCase;

    int r,c,k;
    while(testCase--) {
        cin>>r>>c>>k;

        string str[r+5];
        vector <PII> Rice;

        for(int i=0; i<r; i++){
            cin>>str[i];

        }

        for(int i=0; i<r; i++){
            if(i%2==0){
                for(int j=0; j<c; j++){
                    if(str[i][j]=='R') Rice.push_back({i,j});
                }
            }else{
                for(int j=c-1; j>=0; j--){
                    if(str[i][j]=='R') Rice.push_back({i,j});
                }
            }
        }

        int xx=0, siz=Rice.size(),cnt= siz/k, rem= siz%k, taken=0;
        char marker='a';

        for(int i=1; i<=rem; i++){
            for(int j=1; j<= cnt+1; j++){
                str[ Rice[taken].first ][ Rice[taken].second ]= marker;
                taken++;
            }
            marker++;
            if(marker>'z' && xx==0) marker='A',xx=1;
            if(marker>'Z' && xx==1) marker='0',xx=2;
        }

        for(int i=rem+1; i<=k; i++){
            for(int j=1; j<= cnt; j++){
                str[ Rice[taken].first ][ Rice[taken].second ]= marker;
                taken++;
            }
            marker++;
           if(marker>'z' && xx==0) marker='A',xx=1;
            if(marker>'Z' && xx==1) marker='0',xx=2;
        }

        marker='a';
        for(int i=0; i<r; i++){
            if(i%2==0){
                for(int j=0; j<c; j++){
                    if(str[i][j]!='.' && str[i][j]!=marker) marker=str[i][j];
                    else   str[i][j]=marker;
                }
            }else{
                for(int j=c-1; j>=0; j--){
                    if(str[i][j]!='.' && str[i][j]!=marker) marker=str[i][j];
                    else   str[i][j]=marker;
                }

            }

            cout<<str[i]<<endl;
        }
    }
    return 0;
}
