#include <bits/stdc++.h>
using namespace std;
#define LL           long long
#define PII          pair<int,int>
#define PLL          pair<LL,LL>
#define SORT(x)      sort(x.begin(),x.end())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const LL mod=1e9+7,INF=1e18,mx= 100000+5,mn=100;
int testCase=1,cas=0;
int n,x,y,cnt,ind;
vector <int> G[mx],path[mx]; int visited[mx];

void dfs(int x){
    visited[x]=1;
    path[ind].push_back(x);
    for(int i=0; i<G[x].size(); i++){
        int aa=G[x][i];
        if(!visited[aa]) dfs(aa);
    }
    if(path[ind].size()) cnt++;
    ind++;
}

int main() {
    scanf("%d",&testCase);

    while(testCase--) {
        scanf("%d",&n);
        for(int i=1; i<n; i++){
            scanf("%d %d",&x,&y);
            G[x].push_back(y);
            G[y].push_back(x);
        }
        ind=cnt=0;
        dfs(1);
        printf("%d\n",cnt);
        for(int i=0; i<ind; i++){
            int k=path[i].size();
            if(k){
                for(int j=0; j<k-1; j++){
                    printf("%d ",path[i][j]);
                }
                printf("%d\n",path[i][k-1]);
            }
        }
        for(int i=0; i<=n; i++){
            G[i].clear();
            path[i].clear();
            visited[i]=0;
        }
    }
    return 0;
}

