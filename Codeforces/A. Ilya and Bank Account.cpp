#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n[13];
    scanf("%s",n);
    if(n[0]=='-')
    {
        int len=strlen(n);
        if(len=='3' && n[2]=='0')
        {
            n[0]='0';
            n[1]='\0';
        }
        else
        {
            if(n[len-2]>n[len-1])
            {
                n[len-2]=n[len-1];
                n[len-1]='\0';
            }
            else
            {
                n[len-1]='\0';
            }
        }
    }
    if(n[0]=='-' && n[1]=='0')
        printf("0\n");
    else
        printf("%s\n",n);
    return 0;
}
