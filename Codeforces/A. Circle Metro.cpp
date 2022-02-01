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
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input    ios_base :: sync_with_stdio(false);  cin.tie(NULL);
typedef pair<int,int> PII;
map<char,int> ::iterator mit;
const int mod=1000007;
const int mx=1000005;
int main() {
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int xx=0,route1[4*n];
    int yy=0,route2[4*n];
    int i=a,j=b;
    while(i != x) {
        route1[xx++]=i;
        if(i==n)
            i=1;
        else
            i++;
    }
    route1[xx++]=i;
    while(j != y) {
        route2[yy++]=j;
        if(j==1)
            j=n;
        else
            j--;
    }
    route2[yy++]=j;
    bool flag=false;
    if(xx<=yy) {
        for(i=0; i<xx; i++) {
            if(route1[i]==route2[i])
            {
                flag=true;
                break;
            }
        }
    }
    else{
        for(i=0; i<yy; i++) {
            if(route1[i]==route2[i])
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    /*for(i=0; i<xx; i++)
        cout<<route1[i]<<" ";
    cout<<endl;
    for(i=0; i<yy; i++)
        cout<<route2[i]<<" ";
    cout<<endl;*/
    return 0;
}
