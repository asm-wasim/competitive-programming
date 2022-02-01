
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int k=n;
    if(n<m)
    {
        printf("-1\n");
    }
    else
    {
        int cnt=0;
        for(int i=2; i<=n;)
        {
            i=i+2;
            cnt++;
        }
        //cout<<"1 :"<<cnt<<endl;
        if(k%2==0)
        {
            for(int i=cnt; i<=k; i++)
            {
                if(i%m==0)
                {
                    cnt=i;
                    break;
                }
                //cout<<"2 :"<<cnt<<endl;
            }

        }
        else
        {
            cnt+=(k-cnt*2);
            //cout<<"2 :"<<cnt<<endl;
            for(int i=cnt; i<=k; i++)
            {
                if(i%m==0)
                {
                    cnt=i;
                    break;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
