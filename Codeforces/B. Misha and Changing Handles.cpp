#include <bits/stdc++.h>
using namespace std;
typedef pair<string,string> pii;
int main()
{
    int q,i,j,cnt=0;
    cin>>q;
    string old[q+5],neww[q+5];
    for( i=0; i<q; i++ )
    {
        cin>>old[i]>>neww[i];

    }
    for(i=0; i<q; i++ )
    {
        for(j=i+1; j<q; j++)
        {
            if(neww[i]==old[j])
            {
                neww[i]=neww[j];
                old[j]="-1";
                cnt++;
            }
        }
    }
    cout<<q-cnt<<endl;
    for(i=0; i<q; i++ )
    {
        if(old[i]!="-1")
            cout<<old[i]<<" "<<neww[i]<<endl;
    }
    return 0;
}
