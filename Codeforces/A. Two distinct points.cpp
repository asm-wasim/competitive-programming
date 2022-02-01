
#include <iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    int l1,r1,l2,r2,a,b;
    for(int i=0; i<q; i++)
    {
        cin>>l1>>r1>>l2>>r2;
        //a=l1; b=l2+1;
        //if(l1<l2)

        if(l1==l2)
            cout<<l1+1<<" "<<l2<<endl;
        else
            cout<<l1+1<<" "<<l2+1<<endl;
    }
    return 0;
}
