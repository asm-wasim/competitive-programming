

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

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL);
    //READ("xx.txt"); WRITE("yy.txt");
    int n;
    ll total,temp,maxx;
    while(cin>>n && n!=0)
    {
        //cout<<n<<"kkkkk"<<endl;
        maxx=0,total=0;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            total+=temp;
            if(total>0)
                maxx=max(total,maxx);
            else
                total=0;
        }
        if(maxx > 0)
            printf("The maximum winning streak is %lld.\n",maxx);
        else
            printf("Losing streak.\n");
    }
    return 0;
}

