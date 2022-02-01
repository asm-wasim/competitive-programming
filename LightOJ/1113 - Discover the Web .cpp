
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("bbb.txt","r",stdin);
    string str, link;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        stack <string> stk1,stk2;
        stk1.push("http://www.lightoj.com/");
        cout<<"Case "<<i<<":"<<endl;
        while(cin>>str && str != "QUIT")
        {
            if(str == "BACK")
            {
                if(stk1.size()<=1)
                    cout<<"Ignored"<<endl;
                else
                {
                    string temp=stk1.top();
                    stk1.pop();
                    stk2.push(temp);
                    cout<<stk1.top()<<endl;
                }
            }
            else if(str == "FORWARD")
            {
                if(stk2.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    string temp2=stk2.top();
                    stk2.pop();
                    stk1.push(temp2);
                    cout<<stk1.top()<<endl;
                }
            }
            else
            {
                while(!stk2.empty())
                    stk2.pop();
                cin>>link;
                stk1.push(link);
                cout<<link<<endl;
            }
        }
    }
    return 0;
}
