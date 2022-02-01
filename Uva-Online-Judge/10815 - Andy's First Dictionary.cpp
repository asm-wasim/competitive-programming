#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define ld long double
#define fv first
#define sv second
#define pb push_back
#define mp make_pair
#define in insert
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
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
    IOS
    //READ("a.txt");
    string str,scopy;
    string line;
    vector <string> sep;
    set <string> dic;
    set <string> ::iterator it;
    while(cin>>line)
    {

        for(int i=0; i<line.size(); i++)
        {

            if ((line[i] >= 'a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
            {
                if(line[i]>='A' && line[i]<='Z')
                    line[i]=line[i]+32;
            }
            else
                line[i]=' ';
        }
        sep=split(line,' ');
        for(int j=0; j<sep.size(); j++)
            dic.insert(sep[j]);
    }
    it= dic.begin();
    it++;
    for(; it != dic.end(); it++)
        cout<<*it<<endl;
    return 0;
}

