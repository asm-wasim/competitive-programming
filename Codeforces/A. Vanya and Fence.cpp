
#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a,total=0;
    for(int i=0; i<n;i++)
    {
        cin>>a;
        if(a<=h)
            total++;
        else
            total+=2;
    }
    cout<<total<<endl;
    return 0;
}
