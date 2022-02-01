
#include <iostream>
using namespace std;
int main() {
    int t,n,i,j,k;
    cin>>t;
    for(i=1; i<=t; i++) {
        cin>>n;
        if(n>=10)
            cout<<n-10<<" "<<10<<endl;
        else
            cout<<n-n<<" "<<n<<endl;
    }
    return 0;
}
