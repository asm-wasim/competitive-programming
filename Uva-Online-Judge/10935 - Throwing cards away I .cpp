

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
    deque <int> deck;
    int n;
    while(cin>>n) {
        if(n==0)
            break;
        if(n==1) {
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: "<<n<<endl;

        } else {
            for(int i=1; i<=n; i++) {
                deck.push_back(i);
            }
            cout<<"Discarded cards: ";
            while(deck.size()>2) {
                cout<<deck.front()<<", ";
                deck.pop_front();
                int a=deck.front();
                deck.push_back(a);
                deck.pop_front();
            }
            cout<<deck.front()<<endl;
            deck.pop_front();
            cout<<"Remaining card: "<<deck.front()<<endl;
            deck.clear();
        }
    }
    return 0;
}

