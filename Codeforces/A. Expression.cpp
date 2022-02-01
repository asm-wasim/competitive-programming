#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("\n%d\n%d\n%d",&a,&b,&c);
    int data[6];
    data[0]=a+b+c;
    data[1]=a+(b*c);
    data[2]=(a+b)*c;
    data[3]=(a*b)+c;
    data[4]=a*(b+c);
    data[5]=a*b*c;
    int maxx=data[0];
    for(int i=1; i<6; i++)
    {
        if(data[i]>maxx)
            maxx=data[i];
    }
    printf("%d\n",maxx);
    return 0;
}
