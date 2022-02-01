#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp;
    int g,i;
    while(cin>>g)
    {
        if(g==0) break;
        char ch=getchar();
        cin>>str;
        i=0;
        int len=str.size();
        g=len/g;
        while(i<len)
        {
            temp=str.substr(i,g);
            //cout<<temp<<endl;
            reverse(temp.begin(), temp.end());
            cout<<temp;
            i+=g;
        }
        cout<<endl;

    }
    return 0;
}
