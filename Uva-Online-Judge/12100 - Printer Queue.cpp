
#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;
int main()
{
    //freopen("print.txt","r",stdin);
    int t;
    int n,m,x;
    int cnt,job;
    deque <pair <int,int> > dic;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d",&n,&m);
        cnt=0;
        priority_queue<int> maxv;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x);
            maxv.push(x);
            dic.push_back(make_pair(x,j));
        }
        while(1)
        {
            while(dic.front().first != maxv.top())
            {
                dic.push_back(make_pair(dic.front().first,dic.front().second));
                dic.pop_front();
            }
            if(dic.front().second != m )
            {
                cnt++;
                dic.pop_front();
            }
            else
            {
                cnt++;
                break;
            }
            maxv.pop();
        }
        cout<<cnt<<endl;
        dic.clear();
    }
    return 0;
}
