
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
int main() {
    IOS
    int a;
    cin>>a;
    char ch[a+4][a+4];
    for(int i=0; i<a; i++)
        cin>>ch[i];
    for(int i=0; i<a; i++) {
        for(int j=0; j<a; j++) {
            //cout<<ch[i][j]<<" ";
            if((ch[i][j]=='.')&&(ch[i][j-1]=='.')&& (ch[i][j+1]=='.')&& (ch[i-1][j]=='.')&& (ch[i+1][j]=='.')) {
                ch[i][j]='#';
                ch[i][j-1]='#';
                ch[i][j+1]='#';
                ch[i-1][j]='#';
                ch[i+1][j]='#';
            }
        }
    }
    bool flag=true;
    for(int i=0; i<a; i++) {
        for(int j=0; j<a; j++) {
            if(ch[i][j]=='.') {
                flag=false;
                break;
            }
        }
        if(!flag)
            break;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


