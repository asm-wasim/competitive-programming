
#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    string temp;
    cin>>temp;
    long long int i=0;
    while(i<n)
    {
        if((temp[i]=='1' && temp[i+1]=='0') ||(temp[i]=='0' && temp[i+1]=='1'))
        {
            temp.erase(i,2);
            if(i!=0)
            i-=1;

        }
        else
            i++;
        //cout<<temp<<"   "<<i<<endl;
    }
    cout<<temp.size()<<endl;
    return 0;
}
