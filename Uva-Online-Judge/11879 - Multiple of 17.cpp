
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
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    string number,remin;
    int temp,ss;
    //READ("a.txt");
    //WRITE("b.txt");
    while(cin>>number && number != "0") {
        int len=number.size();
        if(len==1)
            cout<<"0"<<endl;
        else if(len==2) {
            temp=10*(number[0]-'0')+(number[1]-'0');
            if(temp%17==0)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        } else {
            temp=(number[0]-'0')*10+(number[1]-'0');
            temp%=17;
            //cout<<temp<<" agg"<<endl;
            for(int i=2; i<len; i++) {
                temp=(temp*10)+(number[i]-'0');
                //cout<<temp<<" ";
                temp%=17;
                //cout<<temp<<" sbds"<<endl;
            }
            if(temp==0)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        }
        temp=0;
    }
    return 0;
}


