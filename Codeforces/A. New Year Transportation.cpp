
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
    int n,t,i,temp;
    cin>>n>>t;
    vector <int> trans[n+2];
    for(i=1; i<n; i++) {
        cin>>temp;
        trans[i].pb(temp+i);
    }
    //for(i=1; i<n; i++)
        //cout<<i<<" "<<trans[i][0]<<endl;
    int vis[n+2];
    memset(vis,0,sizeof vis);
    stack <int> st;
    st.push(1);
    while(!st.empty()) {
        int cur=st.top();
        st.pop();
        int y=trans[cur][0];
        if (y>=n) {
            break;
        }
        if(vis[y]==0) {
            vis[y]=1;
            st.push(y);
        }
        if(cur>=t)
            break;
    }
    if(vis[t]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


