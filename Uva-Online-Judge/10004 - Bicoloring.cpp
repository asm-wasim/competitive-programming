#include <bits/stdc++.h>
using namespace std;
#define SF scanf
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
#define MCI map<char,int>
#define MII map<int,int>
#define SII set<int,int>
#define PII pair<int,int>
const int mod=1e6+7;
const int mx=1e6+5;
const int temp_size=205;
vector <int> graph[temp_size];
int color[temp_size];
bool visited[temp_size];
int n,l,x,y;
bool BFS() {
    visited[0]=true;
    color[0]=2;
    queue<int> Q;
    Q.push(0);
    while(!Q.empty()) {
        int x=Q.front();
        Q.pop();
        FOR(i,0,graph[x].size()) {
            int y=graph[x][i];
            if(!visited[y]) {
                visited[y]=true;
                Q.push(y);
                if(color[x]==2)
                    color[y]=3;
                else
                    color[y]=2;
            } else {
                if(color[x]==color[y])
                    return false;
            }
        }
    }
    return true;
}
void reset() {
    FOR(i,0,n)
    graph[i].clear();
    memset(visited,0,sizeof visited);
    memset(color,0,sizeof color);
}
int main() {
    while(cin>>n && n!=0) {
        cin>>l;
        FOR(i,0,l) {
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        if(BFS()) {
            cout<<"BICOLORABLE."<<endl;
        } else {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        reset();
    }
    return 0;
}
