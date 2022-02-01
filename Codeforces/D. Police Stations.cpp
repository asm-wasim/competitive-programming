#include <bits/stdc++.h>
using namespace std;
#define LL           long long
#define ULL          unsigned long long
#define PII          pair<int,int>
#define PLL          pair<LL,LL>
#define SORT(x)      sort(x.begin(),x.end())
#define SORTD(x)     sort(x.rbegin(),x.rend())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const LL mod=1e9+7,INF=1e18,mx=3*1e5+5,mn=100;
const double PI=acos(-1.0);
int testCase=1,caseNo=0,x,y,n,k,d;

vector <int> graph[mx];
bool visited[mx],station[mx];
vector <int> cuttedRoad,Police;
int dis[mx];
map <PII,int> RoadNo;

void BFS(int cur){
    visited[cur]=1;
    //cout<<cur<<" s "<<endl;
    for(int i=0; i<=n; i++) dis[i]=0;
    queue <int> Q;
    Q.push(cur);
    while(!Q.empty()){
        int y=Q.front();
        Q.pop();

        for(int i=0; i<graph[y].size(); i++){
            int z= graph[y][i];
            dis[z]=dis[y]+1;
            if(station[z] && dis[z]<=d){
                visited[z]=1;
                if(RoadNo[{y,z}]>-1){
                    cuttedRoad.push_back(RoadNo[{y,z}]);
                    RoadNo[{y,z}]=-1;
                    RoadNo[{z,y}]=-1;
                }
            }else if(!visited[z] && dis[z]<=d){
                visited[z]=1;
                Q.push(z);
            }else if(visited[z] &&dis[z]>d){
                if(RoadNo[{y,z}]>-1){
                    cuttedRoad.push_back(RoadNo[{y,z}]);
                    RoadNo[{y,z}]=-1;
                    RoadNo[{z,y}]=-1;
                }
            }
        }
    }
    ///End
}

int main() {
    scanf("%d %d %d",&n,&k,&d);

    for(int i=0; i<k; i++){
        scanf("%d",&x);
        station[x]=1;
        Police.push_back(x);
    }

    for(int i=1; i<n; i++){
        scanf("%d %d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
        RoadNo[{x,y}]=i;
        RoadNo[{y,x}]=i;
    }
    for(int i=0; i<k; i++){
        BFS(Police[i]);
    }

    printf("%d\n",cuttedRoad.size());
    for(int i=0; i<cuttedRoad.size(); i++)
        printf("%d ",cuttedRoad[i]);
    puts("");

    return 0;
}


