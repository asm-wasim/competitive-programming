#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("list.txt","r",stdin);
    int t,n,m,x;
    cin>>t;
    map <int,int> mymap;
    map <int,int> map2;
    map <int,int> ::iterator it;
    map <int,int> ::iterator iter;
    while(t--)
    {
        cin>>n>>m;
        while(n--)
        {
            cin>>x;
            mymap[x]++;
        }
        while(m--)
        {
            cin>>x;
            map2[x]++;
        }
        int cnt=0;
        if(mymap.size() >= map2.size())
        {
            for(it= mymap.begin(); it != mymap.end(); it++)
            {
                if(map2[it->first]== 0)
                    cnt+=it->second;
                else
                {
                    cnt+=abs(mymap[it->first]-map2[it->first]);
                }
            }
            for(iter= map2.begin(); iter != map2.end(); iter++)

                if(mymap[iter->first]== 0)
                    cnt+=iter->second;
        }
        else
        {
            for(iter= map2.begin(); iter != map2.end(); iter++)
            {
                if(mymap[iter->first]== 0)
                    cnt+=iter->second;
                else
                {
                    cnt+=abs(mymap[iter->first]-map2[iter->first]);
                }
            }
            for(it= mymap.begin(); it != mymap.end(); it++)
                if(map2[it->first]==0)
                    cnt+=it->second;
        }
        cout<<cnt<<endl;
        mymap.clear();
        map2.clear();
    }
    return 0;
}
