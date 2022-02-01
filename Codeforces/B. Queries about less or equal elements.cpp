#include <bits/stdc++.h>
using namespace std;
int koija_bar_kor(vector<int> a,int m,int left,int right)
{
    long long mid,i;
    while(left<=right)
    {
        mid =(left+right)/2;
        if(left==right)
        {
            if(a[left]==m || a[left]<m)
                return left+1;
            else
                return left;
        }

        if(a[mid]<m || a[mid]==m)
                return mid+1;
        else
            right=mid-1;
    }
    return mid+1;


}
int main()
{
    long long n,m,i;
    int temp;
    vector <int> a;
    vector <int> b;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        scanf("%d",&temp);
        a.push_back(temp);
    }

    for(i=0; i<m; i++)
    {
        scanf("%d",&temp);
        b.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(i=0; i<m; i++)
    {
        printf("%d ",koija_bar_kor(a,b[i],0,n-1));
    }
    return 0;
}
