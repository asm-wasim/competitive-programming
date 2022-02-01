
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
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    IOS
    int n,t;
    cin>>n>>t;
    int route[n+2],fp[n+2];
    int maxx=INT_MAX,pos=0;
    for(int i=1; i<=n; i++) {
        scanf("%d %d",&route[i],&fp[i]);
        if(route[i]>=t && route[i]<maxx) {
            maxx=route[i];
            pos=i;
        }
    }
    if(maxx==INT_MAX) {
        for(int i=1; i<=n; i++) {
            int cur=route[i];
            bool flag=false;
            while(true) {
                cur+=fp[i];
                if(cur>=t) {
                    pos=i;
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
    } else {
        for(int i=1; i<=n; i++) {
            int cur=route[i];
            bool flag=false;
            while(true) {
                cur+=fp[i];
                if(cur>=t && cur< maxx) {
                    pos=i;
                    //maxx=cur;
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
    }
    cout<<pos<<endl;
    return 0;
}


