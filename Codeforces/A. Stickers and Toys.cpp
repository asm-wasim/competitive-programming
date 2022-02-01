#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,n,s,t;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&n,&s,&t);
        int ans=max(n-s,n-t);
        printf("%d\n",ans+1);
    }
    return 0;
}
