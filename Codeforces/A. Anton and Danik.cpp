#include<iostream>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0;
    cin>>n;
    char c;
    for(int i=0; i<n; i++)
    {
        cin>>c;
        if(c=='A') cnt1++;
        else cnt2++;

    }
    if(cnt1>cnt2)
        cout<<"Anton"<<endl;
    else if(cnt1<cnt2)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
