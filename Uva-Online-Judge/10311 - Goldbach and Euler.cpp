#include <bits/stdc++.h>
using namespace std;
#define SIZE_N 100000005
bool flag[SIZE_N];
vector <int> primes;
void sieve() {
    int i,j,val;
    for(i=2; i<=SIZE_N; i++) {
        flag[i]=1;
    }
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++) {
        if(flag[i]) {
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=false;
        }
    }
    for(i=2; i<=SIZE_N; i++) {
        if(flag[i]) {
            primes.push_back(i);
        }
    }
}
int main() {
    //freopen("s.txt","r",stdin);
    sieve();
    int n, i;
    while(scanf("%d", &n) == 1) {
        printf("%d is ", n);
        if(n&1) {
            if(flag[n-2]) {
                printf("the sum of 2 and %d.\n", n-2);
            } else {
                puts("not the sum of two primes!");
            }
        } else {
            int check = 0;
            for(i = n/2-1; i >= 0; i--) {
                if(flag[i] && flag[n-i]) {
                    printf("the sum of %d and %d.\n", i, n-i);
                    check = 1;
                    break;
                }
            }
            if(!check)
                puts("not the sum of two primes!");
        }
    }
    return 0;
}
