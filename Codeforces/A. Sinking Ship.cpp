
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
    int n;
    scanf("%d\n",&n);
    string s, tmp1, tmp2,captain;
    vector <string> rat,woch,man;
    vector <string> ::iterator it,it2;
    int i,j,k;
    for(i=0; i<n; i++)
    {
        getline(cin,s);
        vector <string> sep=split(s,' ');
        it2=sep.begin();
        it=sep.begin();
        it++;
        if(*it=="captain")
        {
            captain=*it2;
        }
        else if(*it=="woman" || *it=="child")
        {
            woch.push_back(*it2);
        }
        else if(*it=="rat")
        {
            rat.push_back(*it2);
        }
        else
            man.push_back(*it2);

    }
    for( i=0; i<rat.size(); i++)
        cout<<rat[i]<<endl;
    for( i=0; i<woch.size(); i++)
        cout<<woch[i]<<endl;
    for(i=0; i<man.size(); i++)
        cout<<man[i]<<endl;
    cout<<captain<<endl;

}
