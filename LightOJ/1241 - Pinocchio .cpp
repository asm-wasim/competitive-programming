
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T,n,cas=0,x;
    cin>>T;
    while(T--) {
        cin>>n;
        int cnt=0,a=2;
        while(n--) {
            cin>>x;
            if(x>a) {
                if(x-a>5) {
                    if((x-a)%5==0)
                        cnt+=(x-a)/5;
                    else
                        cnt=cnt+1+(x-a)/5;
                } else
                    cnt++;
            }
            a=x;
        }
        cout<<"Case "<<++cas<<": "<<cnt<<endl;
    }

    return 0;
}
