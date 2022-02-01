//
//#include <bits/stdc++.h>
//using namespace std;
//#define LL          long long
//#define ULL         unsigned long long
//#define LD          long double
//#define PII         pair<int,int>
//#define PLL         pair<LL,LL>
//#define SORT(x)     sort(x.begin(),x.end())
//#define SORTD(x)    sort(x.rbegin(),x.rend())
//#define mem(x)      memset(x,0,size of x)
//#define READ(f)     freopen(f, "r", stdin)
//#define WRITE(f)    freopen(f, "w", stdout)
//#define TEST()      cout<<"Wroking"<<endl
//#define TEST2(x)    cout<<x<<endl
//#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
//const int mod=1e9+7,mx=1e6+5,lim=25;
//int aa,bb,cc,dd,xx,yy,zz;
//int domino[10][10],cnt=0;
//vector <int> graph[8];
//int vis[8],color[8];
//int usedDomino=0;
//
//void BFS(int sx) {
//    vis[sx]=1;
//    int ff=0;
//    for(int i=1; i<7; i++) {
//        if(color[i]==0) {
//            ff=1;
//            color[sx]=i;
//            break;
//        }
//    }
//    if(ff=0)
//        return;
//    queue<int> Q;
//    Q.push(sx);
//    while(!Q.empty() ) {
//        int u=Q.front();
//        Q.pop();
//        vis[u]=1;
//        for(int i=0; i<graph[u].size(); i++) {
//            int v=graph[u][i];
//            //cout<<"U V "<<u<<" "<<v<<endl;
//            if(!vis[v]) {
//                Q.push(v);
//                xx= color[u];
//                yy= color[v];
//                if(xx>0 && yy==0) {
//                    for(int j=1; j<7; j++) {
//                        if(domino[xx][j]==0 && xx != j) {
//                            //cout<<"1  "<<xx<<" "<<j<<endl;
//                            domino[xx][j]=1;
//                            domino[j][xx]=1;
//                            usedDomino++;
//                            color[v]=j;
//                            break;
//                        }
//                    }
//                } else {
//                    if(domino[xx][yy]==0) {
//                        //cout<<"2 "<<xx<<" "<<yy<<endl;
//                        usedDomino++;
//                        domino[xx][yy]=1;
//                        domino[yy][xx]=1;
//                    }
//
//                }
//            }
//        }
//    }
//}
//
//
//int main() {
//    //READ("3in.txt");
//    int t=1,cas=0;
//    while(t--) {
//        int n,m,a,b;
//        scanf("%d %d",&n,&m);
//        for(int i=0; i<m; i++) {
//            scanf("%d %d",&a,&b);
//            graph[a].push_back(b);
//            graph[b].push_back(a);
//        }
//        for(int i=1; i<=n; i++) {
//            if(!vis[i]) {
//                BFS(i);
//            }
//        }
//        if(usedDomino>21)
//            cnt=21;
//        printf("%d\n",usedDomino);
//    }
//    return 0;
//}
//
