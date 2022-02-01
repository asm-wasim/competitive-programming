

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
const int SIZE_P= 1e6;
const int SIZE_N= 1e6;
bool flag[SIZE_N+5];
int primes[SIZE_P+5];
void seive() {
    int i,j,total=0,val;
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++)
        if(!flag[i])
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=1;
    for(i=2; i<=SIZE_N; i++)  //If false its prime
        if(!flag[i])
            primes[total++]=i;
}
int divisor(int N) {
    //if(!flag[N])
        //return 2;
    int i,val,cnt,sum;
    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++) {
        if(N%primes[i]==0) {
            cnt=0;
            while(N%primes[i]==0) {
                N/=primes[i];
                cnt++;
            }
            sum*=(cnt+1);
        }
    }
    if(N>1)
        sum=sum*2;
    return sum;
}
vector <ll> dp;
void NOD() {
    dp.push_back(1);
    for(int i=1; dp[i-1]<=SIZE_P; i++ ) {
        dp.push_back(dp[i-1]+divisor(dp[i-1]));
    }
}
int main() {
    //ios_base :: sync_with_stdio(false);
    //cin.tie(NULL);
    seive();
    NOD();
    //READ("a.txt");
    //WRITE("b.txt");
    int t,a,b;
    vector<ll> ::iterator ans,ans2;
    cin>>t;
    int A,B;
    for(int i=1; i<=t; i++) {
        cin>>a>>b;
        ans=lower_bound(dp.begin(),dp.end(),a);
        ans2=lower_bound(dp.begin(),dp.end(),b);
        A=ans-dp.begin();
        B=ans2-dp.begin();
        if(dp[B]==b)
            B++;

        printf("Case %d: %d\n",i,B-A);
    }
    return 0;
}


