
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    //1,6,12,18,24....
    //1 7 19 37....
    long long ans=(n*(n+1))/2;
    ans*=6;
    cout<<ans+1<<endl;
}

