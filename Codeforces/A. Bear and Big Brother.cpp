
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define sc scanf
#define pf printf
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main()
{
    IOS
    int a,b;
    cin>>a>>b;

    int cnt=0;
    while(1)
    {
        a*=3;
        b*=2;
        cnt++;
        if(a>b)
            break;
    }
    cout<<cnt<<endl;
    return 0;
}
