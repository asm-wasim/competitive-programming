


int List[128];
int listSize;
void primeFactorize( int n ) {
    listSize = 0;
    int sqrtN = int( sqrt(n) );
    for( int i = 0; prime[i] <= sqrtN; i++ ) {
        if( n % prime[i] == 0 ) {
            while( n % prime[i] == 0 ) {
                n /= prime[i];
                List[listSize] = prime[i];
                listSize++;
            }
        }
    }
    if( n > 1 ) {
        List[listSize] = n;
        listSize++;
    }
}
int main() {
    primeFactorize( 114 );
    for( int i = 0; i < listSize; i++ )
        printf("%d ", List[i]);
    return 0;
}
