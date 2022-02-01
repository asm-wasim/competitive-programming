#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    long long ans = a;
    int flag = 0;
    for (int j = 0; j < 10; j++)
    {
        ans = a * 10 + j;
        if (ans % b == 0)
        {
            flag = 1;
            cout << ans;
            for (int k = 1; k < n; k++)
            cout << 0;
            break;
        }
    }
    cout<<endl;
    if (!flag)
        cout << -1 << endl;
    return 0;
}
