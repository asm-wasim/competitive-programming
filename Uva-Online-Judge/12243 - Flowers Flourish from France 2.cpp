
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
    string s;
    vector <string> sep;
    vector <string> :: iterator it;
    //freopen("b.txt","r",stdin);
    while(getline(cin,s))
    {
        if(s=="*")
            break;
        transform(s.begin(),s.end(),s.begin(),:: tolower);
        sep=split(s,' ');
        it=sep.begin();
        char ch= it[0][0];
        it++;
        int flag=0;
        while(it != sep.end())
        {
            if(it[0][0] != ch)
            {
                flag=1;
                break;
            }
            it++;
        }
        if(flag==0)
            printf("Y\n");
        else
            printf("N\n");
    }
}
