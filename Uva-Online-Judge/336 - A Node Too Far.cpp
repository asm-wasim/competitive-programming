#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define ld long double
#define fv first
#define sv second
#define pb push_back
#define mp make_pair
#define in insert
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define mx 1000000
map<int, int> visited;
map<int, int>::iterator it;
map<int, vector<int> > graph;
void BFS(int x) {
    queue<int> q;
    q.push(x);
    visited[x]=0;
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++) {
            int d=graph[u][i];
            if(!visited.count(d)) {
                visited[d]=visited[u]+1;
                q.push(d);
            }
        }
    }
}

int main() {
    //READ("1input.txt");
    //WRITE("1output.txt");
    int nc, cas=0;
    while(cin>>nc && nc!=0) {
        int x, y;
        for(int i=0; i<nc; i++) {
            cin>>x>>y;
            graph[x].pb(y);
            graph[y].pb(x);
        }
        int s, ttl;
        while(cin>>s>>ttl) {
            if(s==0 && ttl==0)
                break;
            visited.clear();
            BFS(s);
            int cnt=0;
            for(it=visited.begin(); it!=visited.end(); ++it) {
                if((*it).second>ttl)
                    ++cnt;
            }
            int ans=cnt+graph.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++cas, ans, s, ttl);
        }
        graph.clear();
    }
    return 0;
}
