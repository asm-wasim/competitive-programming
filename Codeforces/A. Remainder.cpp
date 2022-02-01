
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
/*
// SIEVE
const int SIZE_P= 1e6;
const int SIZE_N= 1e6;
bool flag[SIZE_N+5];
int primes[SIZE_P+5];
void seive() {
    int i,j,total=0,val;
    for(i=2; i<=SIZE_N; i++)
        flag[i]=1;
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++)
        if(flag[i])
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=0;
    for(i=2; i<=SIZE_N; i++)
        if(flag[i])
            primes[total++]=i;
}
//BIG MODE CODE...
long long int  bigmod ( long long a, int p, int m ) {
    if ( p == 0 )
        return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) { // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    } else { //If power is even then split it equally and return the result...
        long long c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}

*/

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin>>n>>x>>y;
    string str;
    cin>>str;
    int cnt = 0;
    for( int i =n-x ; i<n; i++) {
        if(str[i]=='1' ) {
            cnt++;
        }
    }
    if(str[n-1-y]=='0')
        cnt++;
    else
        cnt--;
    cout<<cnt<<endl;
    return 0;
}


