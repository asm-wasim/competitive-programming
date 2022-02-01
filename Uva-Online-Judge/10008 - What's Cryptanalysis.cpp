
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("a.txt","r",stdin);
    string str;
    int n;
    scanf("%d\n",&n);
    map <char ,int> maap;
    map <char ,int> ::iterator iter;
    multimap<int, char, greater <int> > mymap;
    multimap<int, char> ::iterator it;
    for(int i=0; i<n; i++)
    {
        getline(cin,str);
        for(int i=0; i<str.size(); i++)
        {

            if ((str[i] >= 'a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            {
                if(str[i]>='a' && str[i]<='z')
                    str[i]=str[i]-32;
            }
            else
                str[i]=' ';
        }
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                char x=str[i];
                maap[x]++;
            };
        }

    }
    for(iter=maap.begin(); iter != maap.end(); iter++)
    {
      mymap.insert(pair <int,char>(iter->second,iter->first));
    }
    for(it=mymap.begin(); it != mymap.end(); it++)
        cout<<it->second<<" "<<it->first<<endl;
    return 0;
}
