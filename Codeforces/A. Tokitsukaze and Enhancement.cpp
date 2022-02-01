#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define PII pair<int,int>
#define A 1
#define B 2
#define C 3
#define D 4
int main(){
    int N;
    vector<PII> vec;
    while(cin>>N){
        int i=N;
        while(i<=N+2){
            if(i%4==0){
                vec.PB(MP(D,abs(N-i)));
            }else if(i%4==1){
                vec.PB(MP(A,abs(N-i)));
            }else if(i%4==2){
                vec.PB(MP(C,abs(N-i)));
            }else if(i%4==3){
                vec.PB(MP(B,abs(N-i)));
            }
            i++;
            //cout<<i%4<<endl;
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0].SV<<" ";
        if(vec[0].FV==A){
            cout<<"A"<<endl;
        }else if(vec[0].FV==B){
            cout<<"B"<<endl;
        }else if(vec[0].FV==C){
            cout<<"C"<<endl;
        }else if(vec[0].FV==D){
            cout<<"D"<<endl;
        }
        return 0;
        vec.clear();
    }
}
