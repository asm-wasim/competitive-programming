
#include <bits/stdc++.h>
int main() {
    int n,k,total,i;
    while(scanf("%d %d",&n,&k)==2) {
        total=n;
        while(n >= k) {
            i=n/k;
            total+=i;
            n=i+n%k;
        }
        printf("%d\n",total);
    }
    return 0;

}
