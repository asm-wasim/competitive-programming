
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    int yes=0;
    for(int i=0; i<n; i++)
    {
        if(str[i][0]=='O' && str[i][1]=='O')
        {
            str[i][0]='+';
            str[i][1]='+';
            yes=1;
            break;
        }
        else if (str[i][3]=='O' && str[i][4]=='O')
        {
            str[i][3]='+';
            str[i][4]='+';
            yes=1;
            break;
        }
    }
    if(yes==1)
    {
        printf("YES\n");
        for(int i=0; i<n; i++)
        {
            cout<<str[i]<<endl;
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
