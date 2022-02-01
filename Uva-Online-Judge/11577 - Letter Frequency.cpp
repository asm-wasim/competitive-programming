
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    char line[220];
    int len,i,j;
    map<char,int> mymap;
    map<char,int> ::iterator itmp;
    multimap <int,char, greater <int> > copymap;
    multimap <int,char > ::iterator it,iter;
    while(t--)
    {
        gets(line);
        len=strlen(line);
        for(i=0; i<len; i++)
        {
            if(line[i]>='A' && line[i]<='Z')
                line[i]+=32;
            if(line[i]>='a' && line[i]<='z')
                mymap[line[i]]++;
        }
        for(itmp=mymap.begin(); itmp != mymap.end(); itmp++)
        {
            copymap.insert(pair <int,char>(itmp->second,itmp->first));
        }
        it=copymap.begin();
        it++;
        iter=copymap.begin();
        cout<<iter->second;
        while(iter->first == it->first)
        {
            cout<<it->second;
            it++;
        }
        cout<<endl;
        mymap.clear();
        copymap.clear();
    }
    return 0;
}
