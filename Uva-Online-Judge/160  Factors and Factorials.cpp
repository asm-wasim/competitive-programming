
#include <bits/stdc++.h>
using namespace std;
map <int,int> factor;
int prime[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void prime_factors(int n) {
    int a,k;
    for(a=2; a<=n; a++) {
        k=a;
        int lim = int( sqrt(k)+1 );
        for( int i = 0; prime[i] <= lim; i++ ) {
            if( k % prime[i] == 0 ) {

                while( k % prime[i] == 0 ) {
                    k /= prime[i];
                    factor[prime[i]]++;
                }
            }
        }
        if( k > 1 ) {
            factor[k]++;
        }
    }

}
int main() {
    //freopen("3n.txt","r",stdin);
    int num;
    while(scanf("%d",&num)) {
        if(num==0)
            break;
        if(num<=9)
            printf("  %d! =",num);
        else if(num==100)
            printf("%d! =",num);
        else
            printf(" %d! =",num);

        prime_factors(num);
        int bre=0;
        for(int i=0; i<=25; i++) {
            if(factor[prime[i]]) {
                if(bre==15)
                    printf("\n      ");
                if(factor[prime[i]]<=9)
                    printf("  %d",factor[prime[i]]);
                else
                    printf(" %d",factor[prime[i]]);
                bre++;
            }
        }
        printf("\n");
        factor.clear();
    }
    return 0;
}
