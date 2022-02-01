#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> mymap;
    int n,cnt,j,i,k;
    while(cin>>n)
    {
        cnt=0;
        for( i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                 j=2;
                while(j<=i)
                {
                    if(i%j==0)
                    {
                        k=i/j;
                        mymap[j]=k;
                        break;
                    }
                    j++;
                }
            }
            else
                cnt++;
        }

    }
    return 0;
}
