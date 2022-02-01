
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
    int x[4];
    cin>>x[0]>>x[1]>>x[2]>>x[3];
    sort(x,x+4);
    cout<<x[3]-x[2]<<" "<<x[3]-x[1]<<" "<<x[3]-x[0]<<endl;
    return 0;
}


