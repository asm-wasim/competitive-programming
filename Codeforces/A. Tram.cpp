#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max,a,b,c;
    cin>>a>>b;
        c=a+b;
        max=c;
    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>max) max=c;
    }
    cout<<max<<endl;
    return 0;

}
