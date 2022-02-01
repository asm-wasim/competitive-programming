#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int len,i;
    char ch;
    while(cin>>str)
    {
        len=str.size();
        for(i=0;i<len; i++)
            {
                ch=str[i]-7;
                cout<<ch;
            }
        cout<<endl;
    }
    return 0;
}
