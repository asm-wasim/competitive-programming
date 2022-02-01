
#include <bits/stdc++.h>
using namespace std;
int main() {

    int i,j,a,b,n,maxv,cnt;

    while(scanf("%d %d",&i,&j)==2) {

        printf("%d %d ",i,j);
        maxv=1;
        if(i>j)
            swap(i,j);

        for(a=i; a<=j; a++) {
            cnt=1;
            for(b=a; b > 1;) {
                if(b%2==0)
                    b=b/2;
                else
                    b=3*b+1;
                cnt++;
            }
            maxv=max(maxv,cnt);
        }

        printf("%d\n",maxv);
    }
    return 0;
}
