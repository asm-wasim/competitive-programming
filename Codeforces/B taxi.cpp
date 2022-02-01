#include <bits/stdc++.h>
using namespace std;
int cnt[5];
int main() {
    int n,i,j,a;
    //freopen("3in.txt","r",stdin);
    while(cin>>n) {
        //memset(cnt,0,sizeof cnt);
        for(i=0; i<n; i++) {
            cin>>a;
            cnt[a]++;
        }
        cnt[1]-=cnt[3];
        int taxi=cnt[4]+cnt[3]+cnt[2]/2;
        if(cnt[2]&1) {
            taxi++;
            cnt[1]-=2;
        }
        if(cnt[1]>0) {
            taxi+=(cnt[1]/4);
            if(cnt[1]%4!=0)
                taxi++;
        }
        cout<<taxi<<endl;
        return 0;
    }

}
