
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name,host,pile;
    cin>>name;
    cin>>host;
    cin>>pile;
    set<char> set1;
    set <char> set2;
    map<char,int> mp1;
    map <char,int> mp2;
    for(int i=0; i<name.size(); i++)
    {
        set1.insert(name[i]);
        mp1[name[i]]++;
    }
    for(int i=0; i<host.size(); i++)
    {
        set1.insert(host[i]);
        mp1[host[i]]++;
    }
    for(int i=0; i<pile.size(); i++)
    {
        set2.insert(pile[i]);
        mp2[pile[i]]++;
    }
    if(set1.size()!=set2.size())
    {
        printf("NO\n");
    }
    else
    {
        int f=0;
        for(int k=0; k<pile.size() ; k++)
        {
            char  x=pile[k];
            if(mp1[x]!= mp2[x])
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
