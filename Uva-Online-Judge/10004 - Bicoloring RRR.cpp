#include<bits/stdc++.h>
using namespace std;

vector<int>v[205];

int check(int n,int start)
{
    int i;
    queue<int>q;
    q.push(start);
    int col[n];
    for(i=0;i<n;i++){
         col[i]=-1;
    }
    col[start]=1;
    while(!q.empty())
    {
        int x=q.front();
        for(i=0;i<v[x].size();i++){
            if(col[v[x][i]]==-1){
                col[v[x][i]]=col[x]-1;
                q.push(v[x][i]);
            }
            else if(col[v[x][i]]==col[x]){
                 return 0;
            }
        }
        q.pop();
    }
    return 1;
}

int main()
{
    freopen("bi.txt", "r", stdin);
    int n,e,i;
    while(cin>>n)
    {
        if(n==0){
            break;
        }
        cin>>e;
        for(i=1;i<=e;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int flag=check(n,0);
        if(flag==1){
            cout<<"BICOLORABLE."<<endl;
        }
        else{
            cout<<"NOT BICOLORABLE."<<endl;
        }
        for(i=0;i<201;i++){
            v[i].clear();
        }
    }
    return 0;
}
