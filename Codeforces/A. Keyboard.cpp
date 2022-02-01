#include <bits/stdc++.h>
using namespace std;
int main()
{
    string aset="qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin>>ch;
    string mole;
    cin>>mole;
    int lim=aset.size();
    int lim2=mole.size();
    int i,j;
    if(ch=='R')
    {
        for( i=0; i<lim2; i++)
        {
            if(mole[i]=='q' || mole[i]=='a' || mole[i]=='z')
                cout<<mole[i];
            else
                for(j=0; j<lim; j++)
                {
                    if(mole[i]==aset[j])
                    {
                        cout<<aset[j-1];
                    }

                }
        }
    }
    else
    {
        for( i=0; i<lim2; i++)
        {
            if(mole[i]=='p' || mole[i]==';' || mole[i]=='/')
                cout<<mole[i];
            else
                for(j=0; j<lim; j++)
                {
                    if(mole[i]==aset[j])
                    {
                        cout<<aset[j+1];
                    }

                }
        }
    }
    cout<<endl;
    return 0;
}
