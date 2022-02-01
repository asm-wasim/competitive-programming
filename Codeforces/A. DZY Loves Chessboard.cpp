
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    char str[n+5][m+5];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(str[i][j]=='.')
            {
                if(i % 2== 0 && j%2==0)
                    printf("B");
                else if(i%2==0 && j%2 != 0)
                    printf("W");
                else if(i%2 != 0 && j%2 ==0)
                    printf("W");
                else if(i%2 !=0 && i%2 !=0)
                    printf("B");
            }
            else
                printf("-");

        }
        cout<<endl;
    }
    return 0;
}
