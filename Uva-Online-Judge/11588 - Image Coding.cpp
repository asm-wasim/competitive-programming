
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("image.txt","r",stdin);
    int t;
    scanf("%d\n",&t);
    int r,c,m,n;
    string str;
    map <char, int> mymap;
    map <char, int> ::iterator it;
    map <int, int, greater<int> > copymap;
    map <int, int> ::iterator iter;
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d\n",&r,&c,&m,&n);
        int a=r*c;
        while(r--)
        {
            cin>>str;
            for(int j=0; j< str.size(); j++)
            {
                mymap[str[j]]++;

            }
        }
        for(it= mymap.begin(); it != mymap.end(); it++)
        {
            copymap[it->second]++;
        }
        iter= copymap.begin();
        int cnt1=(iter->first)*(iter->second);
        int cnt2=a-cnt1;
        cout<<"Case "<<i<<": "<<(cnt1*m)+(cnt2*n)<<endl;
        mymap.clear();
        copymap.clear();

    }
    return 0;
}
