
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
#define size_p 1000004
bool prime[size_p];
void sieve() {
    int val=sqrt(size_p)+1;
    for(int i=2; i<=val; i++) {
        if(!prime[i]) {
            for(int j=i; i*j<=size_p; j++) {
                prime[i*j]=true;
            }
        }
    }
}
int ulta(int n) {
    int rev=0,rem;
    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    //cout<<rev<<endl;
    return rev;
}
int main() {
    IOS
    int n,rev;
    sieve();
    while(cin>>n) {
        if(prime[n])
            cout<<n<<" is not prime."<<endl;
        else {
            rev=ulta(n);
            if(!prime[rev] && n!=rev)
                cout<<n<<" is emirp."<<endl;

            else
                cout<<n<<" is prime."<<endl;
        }
    }
    return 0;
}


