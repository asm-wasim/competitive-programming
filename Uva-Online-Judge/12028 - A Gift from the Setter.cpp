
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
const int mod=1000007;
long long sequence[100005];
int main() {
    //READ("2in.txt");
    // WRITE("2out.txt");
    int t,n,k,c;
    cin>>t;
    for(int cas=1; cas<=t; cas++) {
        cin>>k>>c>>n>>sequence[0];
        for(int i=1; i<n; i++) {
            sequence[i]=((k*sequence[i-1])+c)%mod;
        }
        sort(sequence,sequence+n);
        /*for(int i=0; i<n; i++)
            cout<<sequence[i]<<" ";
        cout<<endl;*/
         ll sum=0,presum=sequence[0];
        for(int i=1; i<n; i++) {
            sum+=(sequence[i]*i-presum);
            presum+=sequence[i];
        }
        cout<<"Case "<<cas<<": "<<sum<<endl;
    }
}
