#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string clown,acrobat;
    cin>>clown;
    cin>>acrobat;
    int i,j,cnt1=0,cnt2=0,cnt3=0,cnt4=0,check=0;
    for(i=0; i<n; i++)
    {
        if(clown[i]=='1')
            cnt1++;
        else
            cnt2++;
        if(acrobat[i]=='1')
            cnt3++;
        else
            cnt4++;
    }
    //cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<" "<<endl;
    if((cnt1==cnt3 || cnt1==cnt4)&& cnt1!=0)
    {
        for(j=0; j<n; j++)
        {
            if(clown[j]=='0')
            {
                printf("%d ",j+1);
                check++;
            }
            if(check==n/2)
                break;
        }
         printf("\n");
    }
    else
        printf("-1\n");
    return 0;
}
