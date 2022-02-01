
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
int main()
{
    IOS
    string t,s="";
    cin>>t;
    int len=t.size();
    for(int i=0; i<len; i++)
        if(t[i]!='a')
        s+=t[i];
    //cout<<t<<" "<<s<<endl;
    if(s.size() & 1)
    {
        cout<<":("<<endl;
        return 0;
    }
    int half=s.size()/2;
    int k=len-half;
    int temp=k;
    bool flag=false;
    for(int j=0; j<half; j++)
    {
        if(s[j]!= t[k])
        {
            flag=true;
            break;
        }
        k++;
    }
    if(flag)
        cout<<":(";
    else
        for(int i=0; i<temp; i++)
            cout<<t[i];
        cout<<endl;
    return 0;
}


