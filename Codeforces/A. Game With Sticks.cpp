#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int te;
    if(n>=m)
        te=m;
    else
        te=n;
    if(te%2==0)
        printf("Malvika\n");
    else
        printf("Akshat\n");

}
