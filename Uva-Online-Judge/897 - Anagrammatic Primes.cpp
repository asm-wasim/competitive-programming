#include <bits/stdc++.h>
using namespace std;
int anagramic[22] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};
int main()
{
    int n,i,j,digit,pow;
    while(cin>>n)
    {
        if(n==0) break;
        digit=0;
        int k=n;
        pow=1;
        while(k>0)
        {
            digit++;
            k/=10;
        }
        while(digit--)
        {
            pow*=10;
        }
        bool flag=true;
        for(i=0; i<22; i++)
        {
            if(anagramic[i]>n && anagramic[i]< pow)
            {
                printf("%d\n",anagramic[i]);
                flag=false;
                break;
            }
        }
        if(flag)
            printf("0\n");
    }

}
