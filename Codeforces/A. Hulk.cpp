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
    int n;
    cin>>n;
    cout<<"I hate ";
    for(int i=2; i<=n; i++)
    {
        if(i&1)
            cout<<"that I hate ";
        else
            cout<<"that I love ";
    }
    cout<<"it"<<endl;
    return 0;
}

