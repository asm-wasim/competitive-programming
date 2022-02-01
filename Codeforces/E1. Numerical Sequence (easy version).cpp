
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e9+5,lim=25;
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
vector <int> ve;
void make() {
    int kk=1;
    int aa=1;
    while(aa<mx) {
        ve.push_back(aa);
        aa+=kk;
        kk++;

    }
}
int Find(int k) {
    vector<int> ::iterator it= upper_bound(ve.begin(),ve.end(),k);
    it--;
    return *it;
}
int main() {
    make();
    int t=1,cas=0;
    scanf("%d",&t);
    int k;
    string s,str="";
    for(int i=1; i<500; i++) {
    ostringstream str1;
        str1 << i;
        s=str1.str();
        str+=s;
    }
    //cout<<str<<endl;
    while(t--) {
        cin>>k;
        int st= Find(k);
        int x= k-st;
        cout<<st<<" "<<x<<endl;
        cout<<str[x]<<endl;
    }
    return 0;
}

