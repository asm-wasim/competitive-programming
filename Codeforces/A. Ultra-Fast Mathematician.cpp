#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a=s1.length();
    for(int i=0; i<a; i++)
    {
        if(s1[i]==s2[i])
            printf("0");
        else
            printf("1");
    }
    printf("\n");
    return 0;
}
