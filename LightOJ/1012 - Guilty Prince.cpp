
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
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side

char grid[25][25];
int N,M,vis[25][25],p,q;

void init() {
    for(int i=0; i<=M; i++) {
        for(int j=0; j<=N; j++) {
            grid[i][j]='$';
            vis[i][j]=0;
        }
    }

}
int cnt;
bool valid(int i,int j) {
    if((grid[i][j]!='#' )&& (i>0 && j>0 && i<=M && j<=N))
        return true;
    return false;
}
void DFS(int x,int y) {
    if(vis[x][y])
        return;
    vis[x][y]=1;
    if(valid(x,y)) {
        cnt++;
        for(int i=0; i<4; i++) {
            int xx= x+dx[i];
            int yy= y+dy[i];
            DFS(xx,yy);
        }
    }
}

int main() {
//    READ("3loji.txt");
    int t,cas=0;
    SFI(t);
    int x,y,z;
    while(t--) {
        cin>>N>>M;
        init();
        for(int i=1; i<=M; i++) {
            for(int j=1; j<=N; j++) {
                cin>>grid[i][j];
                if(grid[i][j]=='@') {
                    p=i,q=j;
                }
            }
        }
        cnt=0;
        DFS(p,q);
        PF("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}



///Using DFS without direction array
//#include <bits/stdc++.h>
//using namespace std;
//
//int row,col;
//char grid[23][23];
//int pos_i,pos_j;
//int vis[23][23];
//int res;
//void DFS(int i,int j) {
//    if(vis[i][j]==1)
//        return;
//    vis[i][j]=1;
//    if(grid[i][j]=='.' || grid[i][j]=='@') {
//        res++;
//        int x,y;
//        ///Right
//        x=i;
//        y=j+1;
//        DFS(x,y);
//        ///Left
//        x=i;
//        y=j-1;
//        DFS(x,y);
//        ///Up
//        x=i-1;
//        y=j;
//        DFS(x,y);
//        ///Down
//        x=i+1;
//        y=j;
//        DFS(x,y);
//    }
//}
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //freopen("1in.txt","r",stdin);
//    int t,cas=0;
//    cin>>t;
//    while(t--) {
//        cin>>col>>row;
//        for(int i=1; i<=row; i++) {
//            for(int j=1; j<=col; j++) {
//                cin>>grid[i][j];
//                if(grid[i][j]=='@') {
//                    pos_i=i;
//                    pos_j=j;
//                }
//            }
//        }
//        DFS(pos_i,pos_j);
//        cout<<"Case "<<++cas<<": "<<res<<endl;
//        for(int i=0; i<23; i++)
//            for(int j=0; j<23; j++) {
//                vis[i][j]=0;
//                grid[i][j]='0';
//            }
//        res=0;
//    }
//    return 0;
//}


/// Using BFS
//#include <bits/stdc++.h>
//using namespace std;
//
//int row,col;
//char grid[23][23];
//int pos_i,pos_j;
//int vis[23][23];
//int BFS(int i,int j)
//{
//    vis[i][j]=1;
//    queue <pair<int,int> >q;
//    q.push(make_pair(i,j));
//    int cnt=0;
//    while(!q.empty())
//    {
//        int x=q.front().first;
//        int y=q.front().second;
//        q.pop();
//        int temp_i,temp_j;
//        ///Checking Right
//        temp_i=x;
//        temp_j=y+1;
//        if(!vis[temp_i][temp_j] && grid[temp_i][temp_j]=='.')
//        {
//            cnt++;
//            vis[temp_i][temp_j]=1;
//            q.push(make_pair(temp_i,temp_j));
//        }
//        ///Checking Left
//        temp_i=x;
//        temp_j=y-1;
//        if(!vis[temp_i][temp_j] && grid[temp_i][temp_j]=='.')
//        {
//            cnt++;
//            vis[temp_i][temp_j]=1;
//            q.push(make_pair(temp_i,temp_j));
//        }
//        ///Checking Up
//        temp_i=x-1;
//        temp_j=y;
//        if(!vis[temp_i][temp_j] && grid[temp_i][temp_j]=='.')
//        {
//            cnt++;
//            vis[temp_i][temp_j]=1;
//            q.push(make_pair(temp_i,temp_j));
//        }
//        ///Checking Down
//        temp_i=x+1;
//        temp_j=y;
//        if(!vis[temp_i][temp_j] && grid[temp_i][temp_j]=='.')
//        {
//            cnt++;
//            vis[temp_i][temp_j]=1;
//            q.push(make_pair(temp_i,temp_j));
//        }
//    }
//    return cnt+1;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //freopen("1in.txt","r",stdin);
//    int t,cas=0;
//    cin>>t;
//    while(t--)
//    {
//        cin>>col>>row;
//        for(int i=1; i<=row; i++)
//        {
//            for(int j=1; j<=col; j++)
//            {
//                cin>>grid[i][j];
//                if(grid[i][j]=='@')
//                {
//                    pos_i=i;
//                    pos_j=j;
//                }
//            }
//        }
//        int res=BFS(pos_i,pos_j);
//        cout<<"Case "<<++cas<<": "<<res<<endl;
//        for(int i=0; i<23; i++)
//            for(int j=0; j<23; j++)
//            {
//                vis[i][j]=0;
//                grid[i][j]='0';
//            }
//    }
//    return 0;
//}*/
