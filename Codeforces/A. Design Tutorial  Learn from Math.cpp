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
#define size_p 1000005
bool prime[size_p];
void sieve(int n)
{
    int val= sqrt(n)+1;
    for(int i=2; i<=val; i++)
    {
        if(!prime[i])
        {
            for(int j=i; j*i<=n; j++)
                prime[i*j]=true;
        }
    }

}
int main()
{
    IOS
    int n;
    cin>>n;
    sieve(n);
    //for(int i=0; i<=n; i++)
        //cout<<prime[i]<<" ";
    for(int k=4; k<=(n/2); k++)
    {
        int a=n-k;
        if(prime[k] && prime[a])
        {
            cout<<k<<" "<<a<<endl;
            break;
        }
    }
    return 0;
}

