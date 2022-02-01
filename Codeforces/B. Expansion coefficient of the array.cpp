
#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define ld long double
#define fv first
#define sv second
#define pb push_back
#define mp make_pair
#define in insert
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int temp[n+3], minn=INT_MAX,pos=0;
    temp[0]=0;
    for(int i=1; i<=n; i++) {
        cin>>temp[i];
        if(temp[i]<minn) {
            minn=temp[i];
            pos=i;
        }
    }
    int k;
    if(pos>1)
        k=minn/(pos-1);
    else
        k=minn;
    cout<<k<<" "<<minn<<" "<<pos<<endl;
    bool flag=false;
    while(k>0) {
        for(int i=2; i<=n; i++) {
            if(k*(i-1)> min(temp[1],temp[i])) {
                k--;
                flag=true;
                break;
            }
    cout<<k<<" "<<minn<<" "<<pos<<endl;
        }
        if(!flag) {
            break;
        }
    }
    cout<<k<<endl;
    return 0;
}


