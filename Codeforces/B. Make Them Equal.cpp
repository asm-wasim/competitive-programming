
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
    int a,d,total;
    cin>>a;
    int value;
    set <int> se;
    set <int> ::iterator it;
    for(int i=0; i<a; i++) {
        cin>>value;
        se.insert(value);
    }
    it=se.end();
    it--;
    int maxx=*it;
    //cout<<maxx<<endl;
    int check=-1;
    for(d=0; d<maxx; d++)
    {
        it=se.begin();
        int temp=*it+d;
        bool flag=true;
        it++;
        while(it!=se.end())
        {
            if(*it<temp && *it+d != temp)
            {
                flag=false;
                break;
            }
            else if(*it> temp && *it-d != temp)
            {
                flag=false;
                break;
            }
            it++;
        }
        if(flag)
        {
            check=d;
            break;
        }
    }
    cout<<check<<endl;
    return 0;
}


