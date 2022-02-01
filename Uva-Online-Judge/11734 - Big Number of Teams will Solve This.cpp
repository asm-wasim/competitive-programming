
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    char s1[25],s2[25],s3[25];
    for(int i=1; i<=t; i++)
    {
        gets(s1);
        gets(s2);
        int l1=strcmp(s1,s2);
        cout<<"Case "<<i<<": ";
        if(l1==0)
            cout<<"Yes"<<endl;
        else
        {
            int len2=strlen(s1);
            int a=0;
            for(int k=0; k<len2; k++)
            {

                if(s1[k] != ' ')
                {
                    s3[a]=s1[k];
                    a++;
                }
            }
            s3[a]='\0';
            int com1=strcmp(s2,s3);
            if(com1==0)
                cout<<"Output Format Error"<<endl;
            else
                cout<<"Wrong Answer"<<endl;
        }
    }
    return 0;
}
