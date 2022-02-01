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
int h,w;
char pic[502][502];
void row_col(int i,int j) {
    int k=i;
    while(k>=0) {
        if(pic[k][j]=='.')
            break;
        pic[k][j]='T';
        k--;
    }
    k=i;
    while(k<h) {
        if(pic[k][j]=='.')
            break;
        pic[k][j]='T';
        k++;
    }
    k=j;
    while(k>=0) {
        if(pic[i][k]=='.')
            break;
        pic[i][k]='T';
        k--;
    }
    k=j;
    while(k<w) {
        if(pic[i][k]=='.')
            break;
        pic[i][k]='T';
        k++;
    }
}
bool check() {
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(pic[i][j]=='*')
                return true;
        }
    }
    return false;
}
int main() {
    SF("%d %d",&h,&w);
    for(int i=0; i<h; i++) {
        SF("%s",&pic[i]);
    }
    bool flag=false;
    int cnt=0;
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(pic[i][j]=='*' && pic[i-1][j]=='*' && pic[i][j-1]=='*' && pic[i+1][j]=='*' && pic[i][j+1]=='*') {
                row_col(i,j);
                flag=true;
                cnt++;
                if(check()) {
                    flag=false;
                } else
                    flag=true;
            }
        }

    }
    if(flag && cnt==1)
        PF("YES\n");
    else
        PF("NO\n");
    return 0;
}
