
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("qu.txt","r",stdin);
    deque <string> myqe;
    int t,n,m;
    scanf("%d\n",&t);
    string str;
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d\n",&n,&m);
        cout << "Case " << i << ":\n";
        for(int j=0; j<m; j++)
        {
            cin>>str;
            if(str=="popLeft" || str=="popRight")
            {
                if(myqe.size()==0)
                    cout<<"The queue is empty"<<endl;
                else if(str=="popLeft")
                {
                    cout<<"Popped from left: "<<myqe.front()<<endl;
                    myqe.pop_front();
                }
                else
                {
                    cout<<"Popped from right: "<<myqe.back()<<endl;
                    myqe.pop_back();
                }

            }
            else
            {
                string a;
                cin>>a;
                if(myqe.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {

                    if(str=="pushLeft")
                    {
                        myqe.push_front(a);
                        cout<<"Pushed in left: "<<a<<endl;

                    }
                    else
                    {
                        myqe.push_back(a);
                        cout<<"Pushed in right: "<<a<<endl;

                    }

                }
            }
        }
        myqe.clear();

    }
    return 0;
}
