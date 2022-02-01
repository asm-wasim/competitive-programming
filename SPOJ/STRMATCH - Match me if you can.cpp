

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
int main()
{
    IOS
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    string match;
    map <string,int> sub;
    int len=str.size();
    for(int i=0; i<len; i++){
        for(int j=0; j<=len-i; j++)
        {
            match=str.substr(i,j);
            //cout<<match<<endl;
            sub[match]++;
        }
    }
    while(q--)
    {
        cin>>match;
        cout<<sub[match]<<endl;
    }
    return 0;
}

