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
int main() {
    int n,cnt=0;
    cin>>n;
    vector <int> skill;
    int temp;
    for(int i=0; i<n; i++) {
        scanf("%d",&temp);
        skill.push_back(temp);
    }
    sort(skill.begin(),skill.end());
    int j=0;
    for(int i=0; i<n; i++) {
        while(skill[j]-skill[i]<=5 && j<n) {
            cnt=max(cnt,j-i);
            j++;
        }
    }
    cout<<++cnt<<endl;
    return 0;
}
