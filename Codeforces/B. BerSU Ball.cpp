
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
//Sorting
int main()
{
    int n,m;
    cin>>n;
    int boy[n+2];
    forloop(i,0,n)
    cin>>boy[i];
    cin>>m;
    int girl[m+2];
    forloop(i,0,m)
    cin>>girl[i];
    sort(boy,boy+n);
    sort(girl,girl+m);
    int cnt=0;
    forloop(i,0,n)
    {
        forloop(j,0,m)
        {
            if(abs(boy[i]-girl[j])<=1)
            {
                girl[j]=500;
                cnt++;
                break;

            }
        }
    }
    cout<<cnt<<endl;
}
