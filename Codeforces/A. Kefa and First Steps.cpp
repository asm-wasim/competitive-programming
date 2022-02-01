#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,a,cnt,max=0;
    cin>>n;
    vector <int> sub;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sub.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        cnt=1;
        for(int j=i; j<n-1; j++)
        {
            if(sub[j]<=sub[j+1])
            {
                cnt++;
            }
            else
            {

                break;
            }
        }
        if(cnt>max)
            max=cnt;
    }
    cout<<max<<endl;
    return 0;
}
