#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    string fl,sl;
    vector <string> fline,sline;
    for(int i=0; i<n; i++)
    {
        getline(cin,fl);
        fline.push_back(fl);

        getline(cin,sl);
        sline.push_back(sl);
    }
    int q;
    scanf("%d\n",&q);
    for(int i=0; i<q; i++)
    {
        getline(cin,fl);
        for(int j=0; j<fline.size(); j++)
        {
            if(fl==fline[j])
            {
                cout<<sline[j]<<endl;
            }
        }
    }
    return 0;
}
