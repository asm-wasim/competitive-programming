
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
int vis[10][10],dis[10][10];

int BFS(int sx,int sy,int ex,int ey){
    memset(vis,0,sizeof vis);
    memset(dis,0,sizeof dis);
    dis[sx][sy]=0;
    vis[sx][sy]=1;
    queue<PII> Q;
    Q.push({sx,sy});
    while(!Q.empty()){
        int x= Q.front().first; int y=Q.front().second;
        Q.pop();
        if(x==ex && y==ey){
            return dis[x][y];
        }
        for(int i=0; i<8; i++){
            int xx=x+fx[i]; int yy=y+fy[i];
            if(xx>0 && yy>0 && xx<=8 && yy<=8 && !vis[xx][yy]){
                Q.push({xx,yy});
                dis[xx][yy]=dis[x][y]+1;
                vis[xx][yy]=1;
            }
        }
    }
}


int main() {
    int t=1,cas=0,n;
    char a[3],b[3];
    while(scanf("%s %s",a,b)==2) {
        int sy= a[0]-'a' +1;
        int sx= a[1] - '0';
        int ey= b[0]-'a' +1;
        int ex= b[1] - '0';
        printf("To get from %s to %s takes %d knight moves.\n",a,b,BFS(sx,sy,ex,ey));
    }
    return 0;
}

