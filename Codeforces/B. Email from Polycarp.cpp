#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
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

int main(){
    int t,n;
    SFI(t);
    map<char,int>a,b;
    map<char,int>::iterator it,it2;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        for(int i=0; s1[i]; i++)
            a[s1[i]]++;
        for(int i=0; s2[i]; i++)
            b[s2[i]]++;
        s1.erase(unique(s1.begin(),s1.end()),s1.end());
        s2.erase(unique(s2.begin(),s2.end()),s2.end());
        bool flag=true;
        //cout<<s1<< " "<<s2<<a.size()<<" "<<b.size()<<endl;
        if(s1 == s2 && a.size()== b.size()){
            for(it=a.begin(); it!= a.end(); it++){
                if(it->SV > b[it->FV]){
                    flag=false;
                    break;
                }
            }
        }else
            flag=false;
        if(flag)
            PF("YES\n");
        else
            PF("NO\n");
        a.clear();
        b.clear();
    }
}
