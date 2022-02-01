#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)

int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side

int N,M,dis[25][25],vis[25][25],a_i,a_j,b_i,b_j,c_i,c_j;
char grid[25][25];

void init(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            grid[i][j]='$';
            vis[i][j]=0;
            dis[i][j]=INT_MAX;
        }
    }
}
void reset(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            vis[i][j]=0;
            dis[i][j]=INT_MAX;
        }
    }
}
bool valid(int i,int j){
    if((grid[i][j]=='a' || grid[i][j]=='b' || grid[i][j]=='c' || grid[i][j]=='.' || grid[i][j]=='h') && !vis[i][j])
        return true;
    return false;
}
int BFS(int x,int y){
    dis[x][y]=0;
    vis[x][y]=1;
    queue<PII> Q;
    Q.push(MP(x,y));
    while(!Q.empty()){
        int p=Q.front().first;
        int q=Q.front().second;
        Q.pop();
        for(int i=0; i<4; i++){
            int xx= p+dx[i];
            int yy= q+dy[i];
            if(valid(xx,yy)){
                dis[xx][yy]=min(dis[p][q]+1,dis[xx][yy]);
                Q.push(MP(xx,yy));
                vis[xx][yy]=1;
            }
            if(grid[xx][yy]=='h')
                return dis[xx][yy];
        }
    }
}
int main() {
    int t,cas=0;
    SFI(t);
    while(t--) {
        SFDI(N,M);
        getchar();
        init();
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                scanf("%c",&grid[i][j]);
                if(grid[i][j] == 'a')
                    a_i=i,a_j=j;
                else if(grid[i][j] == 'b')
                    b_i=i,b_j=j;
                else if(grid[i][j] == 'c')
                    c_i=i,c_j=j;
            }
            getchar();
        }
        int x=BFS(a_i,a_j);
        reset();
        int y= BFS(b_i,b_j);
        reset();
        int z=BFS(c_i,c_j);
        int ans=max(x,max(y,z));
        PF("Case %d: %d\n",++cas,ans);
    }
    return 0;
}










//#define conditon  (grid[i][j]=='a' || grid[i][j]=='b' || grid[i][j]=='c' || grid[i][j]=='.' || grid[i][j]=='h') && !visit[i][j]
//int m,n;
//char grid[lim][lim];
//int visit[lim][lim], dis[lim][lim];
//int a_i,a_j,b_i,b_j,c_i,c_j;
//int bfs(int i,int j) {
//    visit[i][j]=1;
//    dis[i][j]=0;
//    queue <PII> Q;
//    Q.push(MP(i,j));
//    while(!Q.empty()) {
//        int x=Q.front().first;
//        int y=Q.front().second;
//        Q.pop();
//        ///Left
//        i=x,j=y-1;
//        if(conditon) {
//            dis[i][j]=min(dis[x][y]+1,dis[i][j]);
//            visit[i][j]=1;
//            Q.push(MP(i,j));
//        }
//        if(grid[i][j]=='h')
//            return dis[i][j];
//        ///Right
//        i=x,j=y+1;
//        if(conditon) {
//            dis[i][j]=min(dis[x][y]+1,dis[i][j]);
//            visit[i][j]=1;
//            Q.push(MP(i,j));
//        }
//        if(grid[i][j]=='h')
//            return dis[i][j];
//        ///Up
//        i=x-1,j=y;
//        if(conditon) {
//            dis[i][j]=min(dis[x][y]+1,dis[i][j]);
//            visit[i][j]=1;
//            Q.push(MP(i,j));
//        }
//        if(grid[i][j]=='h')
//            return dis[i][j];
//        ///Down
//        i=x+1,j=y;
//        if(conditon) {
//            dis[i][j]=min(dis[x][y]+1,dis[i][j]);
//            visit[i][j]=1;
//            Q.push(MP(i,j));
//        }
//        if(grid[i][j]=='h')
//            return dis[i][j];
//    }
//}
//void reset() {
//    for(int i=0; i<lim; i++) {
//        for(int j=0; j<lim; j++) {
//            visit[i][j]=0;
//            dis[i][j]=INT_MAX;
//        }
//    }
//}
//void clr() {
//    for(int i=0; i<lim; i++) {
//        for(int j=0; j<lim; j++) {
//            visit[i][j]=0;
//            dis[i][j]=INT_MAX;
//            grid[i][j]='#';
//        }
//    }
//}
//int main() {
//    //READ("3in.txt");
//    //WRITE("3out.txt");
//    int t,cas=0;
//    SF("%d",&t);
//    while(t--) {
//        SF("%d %d",&m,&n);
//        getchar();
//         clr();
//        for(int i=0; i<m; i++) {
//            for(int j=0; j<n; j++) {
//                cin>>grid[i][j];
//                if(grid[i][j] == 'a')
//                    a_i=i,a_j=j;
//                else if(grid[i][j] == 'b')
//                    b_i=i,b_j=j;
//                else if(grid[i][j] == 'c')
//                    c_i=i,c_j=j;
//            }
//        }
//        int x=bfs(a_i,a_j);
//        reset();
//        int y=bfs(b_i,b_j);
//        reset();
//        int z=bfs(c_i,c_j);
//        int ans=max(x,y);
//        ans=max(ans,z);
//        PF("Case %d: %d\n",++cas,ans);
//    }
//    return 0;
//}

