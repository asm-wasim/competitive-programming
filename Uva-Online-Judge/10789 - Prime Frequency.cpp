
#include <bits/stdc++.h>
using namespace std;
int isprime(int n);
int main()
{
    // freopen("p.txt","r",stdin);

    string str;
    set<char> se;
    set<char> ::iterator iter;
    map <char, int> mp;
    map <char, int> ::iterator it;
    int t;
    scanf("%d\n",&t);
    for(int i=1; i<=t; i++)
    {

        cin>>str;
        for(int j=0; j<str.size(); j++)
        {
            mp[str[j]]++;
        }

        for(it=mp.begin(); it != mp.end(); it++)
        {
            int a= isprime(it->second);
            if(a==1)
                se.insert(it->first);
        }
        cout<<"Case "<<i<<": ";
        if(se.empty())
        {
            cout<<"empty";
        }
        else
        {
            for(iter= se.begin(); iter != se.end(); iter++)
            {
                cout<<*iter;
            }
        }
        cout<<endl;
        mp.clear();
        se.clear();
    }
    return 0;
}
int isprime(int n)
{
    if(n==1 || n==4)
        return 0;
    else if(n==2 || n==3 || n==5)
        return 1;
    else
    {
        for(int j=3; j<=(n/2); j++)
        {
            if(n%j ==0)
                return 0;
        }
        return 1;
    }
}
