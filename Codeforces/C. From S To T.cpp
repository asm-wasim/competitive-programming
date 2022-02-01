
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
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=25;
string s,t,p,temp;

bool check(char ch) {
    for(int i=0; p[i]; i++) {
        if(p[i]==ch) {
            p.erase(i,1);
            return true;
        }
    }
    return false;
}

int main() {
    //READ("3in.txt");
    int T;
    cin>>T;
    while(T--) {
        cin>>s>>t>>p;
        bool flag=true;
        for(int i=0; t[i]; i++) {
            if(t[i]!=s[i]) {
                if(check(t[i])) {
                    temp=s;
                    s="";
                    int k;
                    for(k=0; k<i; k++) {
                        s+=temp[k];
                    }
                    s+=t[i];
                    while(temp[k]) {
                        s+=temp[k];
                        k++;
                    }
                } else {
                    flag=false;
                    break;
                }
            }
        }
        if(flag && s==t)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
