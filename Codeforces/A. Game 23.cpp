
#include <bits/stdc++.h>
using namespace std;
int convert(int m, int n) {
    if (m == n)
        return 0;
    if (m > n)
        return m - n;
    if (m <= 0 && n > 0)
        return -1;
    if (n % 3 ==0)
        return 1 + convert(m*3, n);
    else
        return 1 + convert(m*2, n);
}
int main() {
    int m, n;
    cin>>m>>n;
    cout<< convert(m, n)<<endl;
    return 0;
}
