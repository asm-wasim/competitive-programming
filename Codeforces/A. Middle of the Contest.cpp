
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    scanf("%d",&h1);
    getchar();
    scanf("%d",&m1);
    scanf("%d",&h2);
    getchar();
    scanf("%d",&m2);
    int total=(h1*60)+(h2*60)+m1+m2;
    total/=2;
    printf("%.2d:%.2d\n",total/60,total%60);

}
