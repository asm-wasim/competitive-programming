
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
    //READ("a.txt");
    //WRITE("b.txt");
    int t,n,i,j,k;
    bool flag;
    cin>>t;
    string number;
    vector <string> phone;
    while(t--) {
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>number;
            phone.push_back(number);
        }
        sort(phone.begin(),phone.end());
        int len=phone.size();
        flag=false;
        for(i=0; i<len; i++) {
            for(j=i+1; j<len; j++) {
                size_t found = phone[j].find(phone[i]);
                if (found != string::npos && found==0) {
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }

        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        phone.clear();
    }
    return 0;
}


