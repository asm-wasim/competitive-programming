
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
    int n;
    cin>>n;
    string str;
    cin>>str;
    int temp1,temp2,temp3,ans=INT_MAX;
    for(int i=0; i<n-3; i++) {
        temp1=0;
        temp2=abs(str[i]-'A');
        temp3=abs(str[i]-'Z')+1;
        temp1+=min(temp2,temp3);
        cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;

        temp2=abs(str[i+1]-'C');
        temp3=abs(str[i+1]-'Z')+3;
        temp1+=min(temp2,temp3);
        cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;

        temp2=abs(str[i+2]-'T');
        temp3=abs(str[i+2]-'Z')+('T'-'A');
        temp1+=min(temp2,temp3);
        cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;

        temp2=abs(str[i+3]-'G');
        temp3=abs(str[i+3]-'Z')+('G'-'A');
        temp1+=min(temp2,temp3);
        cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;
        ans=min(ans,temp1);
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}


