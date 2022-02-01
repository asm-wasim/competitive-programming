
#include <bits/stdc++.h>
using namespace std;
vector<string> split(string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str);
    string tok;
    while(getline(ss, tok, delimiter))
    {
        internal.push_back(tok);
    }
    return internal;
}
int main()
{
    int t,len1,len2;
    scanf("%d",&t);
    string olds,news;
    vector <string> index_old,index_new,temp_value;
    map <string,string> oldmap,newmap;
    map <string,string> ::iterator it;
    while(t--)
    {
        cin>>olds>>news;
        len1=olds.size();
        len2=news.size();
        olds.erase(0,1);
        news.erase(0,1);
        olds.erase(len1-2,1);
        news.erase(len2-2,1);
        index_old=split(olds,',');
        index_new=split(news,',');
        for(int i=0; i<index_old.size(); i++)
        {
            temp_value=split(index_old[i],':');
            oldmap[temp_value[0]]=temp_value[1];
            temp_value.clear();
        }
        for(int i=0; i<index_new.size(); i++)
        {
            temp_value=split(index_new[i],':');
            newmap[temp_value[0]]=temp_value[1];
            temp_value.clear();
        }
        for(it=oldmap.begin(); it!=oldmap.end(); it++)
            cout<<it->first<<" "<<it->second<<endl;
        for(it=newmap.begin(); it!=newmap.end(); it++)
            cout<<it->first<<" "<<it->second<<endl;
        //remember : clear all vector & map after a print
    }
    return 0;

}
