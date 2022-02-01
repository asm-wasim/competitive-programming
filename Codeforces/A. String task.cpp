#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>='A' && a[i]<='Z' && a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U' && a[i]!='Y')
        {
            printf(".%c",32+a[i]);
        }
        if(a[i]>='a' && a[i]<='z' && a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
        {
            printf(".%c",a[i]);
        }
    }

    cout<<endl;
}
