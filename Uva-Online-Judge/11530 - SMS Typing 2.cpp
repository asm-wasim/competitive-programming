#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,Case = 0;
    int s[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    string str;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        getline(cin,str);
        int ans = 0, i;
        for(i = 0; str[i]; i++)
        {
            if(str[i] == ' ')
                ans++;
            else
                ans += s[str[i]-'a'];
        }
        printf("Case #%d: %d\n", ++Case, ans);
    }
    return 0;
}
