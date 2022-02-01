
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
    //READ("3in.txt");
    //WRITE("3out.txt");
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    string str;
    for(int cas=1; cas<=t; cas++)
    {
        cin>>n>>str;
        int i=0,cnt=0;
        for(; i<n; i++)
            if(str[i]=='8')
                break;
        if(n-i >= 11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        //printf("Case #%d:\n",cas);
    }
    return 0;
}
