#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,temp;
    int ternary[100];
    while(cin>>n) {
        if(n<0)
            break;
        int i=0;
        while(n>0) {
            temp=n%3;
            ternary[i]=temp;
            n/=3;
            i++;
        }
        int j=i;
        bool flag=true;
        while(j--) {
            if(ternary[j]!=0) {
                flag=false;
                break;
            }

        }
        if(flag)
            cout<<"0";
        else {
            while(i--)
                cout<<ternary[i];
        }

        cout<<endl;
    }
    return 0;
}
