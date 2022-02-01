#include <bits/stdc++.h>
using namespace std;
#define Fast_Input ios_base::sync_with_stdio(false); cin.tie(NULL);
const int mx=106;
int adj[mx][mx],visited[mx];
int N,M;
stack <int> ans;
void init(){
    for(int i=0; i<=N; i++){
        visited[i]=0;
        for(int j=0; j<=N; j++){
            adj[i][j]=0;
        }
    }
}
void dfsvisit(int x){
    visited[x]=1;
    for(int i=1; i<=N; i++){
        if(adj[x][i]==1 && visited[i]==0){
            dfsvisit(i);
        }
    }
    ans.push(x);
}
void dfs(){
    for(int i=1; i<=N; i++){
        if(!visited[i]){
            dfsvisit(i);
        }
    }
}

int main(){
    int u,v;
    while(cin>>N>>M){
        if(N+M==0)
            break;
        init();
        for(int i=0; i<M; i++){
            cin>>u>>v;
            adj[u][v]=1;
        }
        dfs();
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        cout<<endl;
    }
    return 0;
}
