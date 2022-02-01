#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a.compare(b)==0)
        cout<<"0"<<endl;
    else if(a.compare(b)<0)
        cout<<"-1"<<endl;
    else
        cout<<"1"<<endl;
}
