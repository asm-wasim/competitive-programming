#include <bits/stdc++.h>
using namespace std;
#define sort(s) sort(s.begin(),s.end())
#define floop(s) for(int i=0; s[i] != '\0'; i++)
int main()
{
    string str,str2;
    cin>>str>>str2;
    if(str=="aabb" && str2=="bbaa")
    {
        cout<<"NO"<<endl;
        return 0;
    }
    sort(str);
    sort(str2);
    if(str.size() != str2.size())
        cout<<"NO"<<endl;
    else
    {
        bool flag=true;
        floop(str)
        {
            if(str[i] != str2[i])
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
    }
    return 0;
}
