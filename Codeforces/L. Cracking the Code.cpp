#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long n,m;
    n=(s[0]-'0')*10000+(s[2]-'0')*1000+(s[4]-'0')*100+(s[3]-'0')*10+(s[1]-'0');
    m=n;
    for(int i=0; i<4; i++) {
        n=n*m%100000;
        //cout<<n<<endl;
    }
    if(!n)
        printf("00000\n");
    else
        printf("%I64d\n",n);
}
