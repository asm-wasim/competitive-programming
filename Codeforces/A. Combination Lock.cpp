#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    char s1[n+1],s2[n+1];
    scanf("%s",s1);
    scanf("%s",s2);

    int temp1,temp2;
    for(int i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]>=s2[i])
        {
            temp1=s1[i]-s2[i];
            temp2=(9-s1[i])+s2[i];
            if(temp1<=temp2)
                cnt+=temp1;
            else
                cnt+=(temp2+1);
        }
        else
        {
            temp1=s2[i]-s1[i];
            temp2=(9-s2[i])+s1[i];
            if(temp1<=temp2)
                cnt+=temp1;
            else
                cnt+=(temp2+1);
        }

    }
    cout<<cnt<<endl;
    return 0;
}
