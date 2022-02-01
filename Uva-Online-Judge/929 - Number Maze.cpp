#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define PII pair<int,int>
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=1e3+5;
const int INFF=INT_MAX;
int N,M,cost[lim][lim],dis[lim][lim];
struct node {
    int a,b,cost;
    node(int _a,int _b,int _cost) {
        a=_a,b=_b,cost=_cost;
    }
    bool operator < (const node& p) const {
        return cost>p.cost;
    }
};
void init() {
    for(int i=0; i<=N; i++) {
        for(int j=0; j<=M; j++) {
            dis[i][j]=INFF;
        }
    }
}
bool is_valid(int x,int y) {
    if (x>=0 && y>=0 && x<N && y<M)
        return true;
    return false;
}
void Dijkstra() {
    priority_queue <node> q;
    q.push(node(0,0,cost[0][0]));
    dis[0][0]=cost[0][0];
    int x,y,xx,yy;
    while(!q.empty()) {
        x=q.top().a;
        y=q.top().b;
        q.pop();
        if(x==N-1 && y==M-1)
            return;
        for(int i=0; i<4; i++) {
            xx=x+dx[i];
            yy=y+dy[i];
            if(dis[x][y]+cost[xx][yy] < dis[xx][yy] && is_valid(xx,yy)) {
                dis[xx][yy]=dis[x][y]+cost[xx][yy];
                q.push(node(xx,yy,dis[xx][yy]));
            }
        }
    }
}
int main() {
    //READ("2in.txt");
    //WRITE("2out.txt");
    int t,w;
    SFI(t);
    while(t--) {
        SF("%d %d",&N,&M);
        init();
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                cin>>cost[i][j];
            }
        }
        Dijkstra();
        cout<<dis[N-1][M-1]<<endl;
    }
    return 0;
}

