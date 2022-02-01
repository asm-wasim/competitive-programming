

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    /*if(n==1)
        cout<<"2"<<endl;
    else if(n==2)
        cout<<"6"<<endl;
    else*/
    //2 4 8 16 32.....
    long long a=pow(2,n+1)-2;
    cout<<a<<endl;
}
