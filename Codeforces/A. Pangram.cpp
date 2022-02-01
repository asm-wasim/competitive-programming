#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    set <char> a;
    for(int i=0; i<n; i++)
    {
        a.insert(s[i]);
    }
    int k=a.size();
    if(k==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
