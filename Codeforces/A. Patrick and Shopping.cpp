#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int aa = a + a + 2*b;
    int bb = a + b + c;
    int cc= 2*a + 2*c;
    int dd= 2*b + 2*c;
    cout << min(aa,min(bb,min(cc,dd))) << endl;
    return 0;
}
