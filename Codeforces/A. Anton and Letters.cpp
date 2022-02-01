#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len=s.length();
    sort(s.begin(),s.end());
    int cnt=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i]!=s[i+1])
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
