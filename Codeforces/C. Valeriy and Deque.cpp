

#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
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
#define MCI map<char,int>
#define MII map<int,int>
#define SII set<int,int>
#define PII pair<int,int>
const LL lim=100;
void print(deque <int> de)
{
    while(!de.empty()){
        cout<<de.front()<<" ";
        de.pop_front();
    }
    cout<<endl;
}
int main(){
    Fast_Input
    LL n,q,m,a,b,temp;
    deque <int> de;
    vector <deque <int> > ve;
    while(cin>>n>>q){
        for(int i=0; i<n; i++){
            cin>>temp;
            de.push_back(temp);
        }
        for(int i=1; i<=lim; i++){
            cout<<i<<" ";
            print(de);
            a=de.front();
            de.pop_front();
            b=de.front();
            de.pop_front();
            if(a>=b)
                de.push_back(b),de.push_front(a);
            else
                de.push_back(a),de.push_front(b);
            //cout<<a<<" "<<b<<endl;
            //ve.push_back(de);
        }

        ve.clear();
        de.clear();
    }
    return 0;
}

