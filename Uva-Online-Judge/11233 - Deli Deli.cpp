#include <iostream>
#include <map>
#include <string>
#include <cstdio>

using namespace std;
int main()
{
    //freopen("deli.txt","r",stdin);
    map <string,string> mp;
    map <string,string> :: iterator it;

    string str,str2;

    int l,m;
    cin>>l>>m;
    while(l--)
    {
        cin>>str>>str2;
        mp[str]=str2;
    }
    while(m--)
    {
        cin>>str;
        if(mp[str] !="\0")
        {
            cout<<mp[str]<<endl;
        }
        else
        {
            int si=str.size();
            if( si>1 && (str[si-2]!='a' && str[si-2]!='e' && str[si-2]!='i' && str[si-2]!='o' && str[si-2]!='u') && str[si-1]=='y' )
            {
                str[si-1]='i';
                cout<<str<<"es"<<endl;
            }
            else if((str[si-1]=='o') || (str[si-1]=='s') || (str[si-1]=='x') || (str[si-2]=='c' && str[si-1]=='h') || (str[si-2]=='s' && str[si-1]=='h'))
            {
                cout<<str<<"es"<<endl;
            }
            else
            {
                cout<<str<<"s"<<endl;
            }

        }
    }
    mp.clear();
    return 0;
}
