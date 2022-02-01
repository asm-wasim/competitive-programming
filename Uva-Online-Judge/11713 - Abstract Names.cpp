
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    string main,dup;
    int len1,len2;
    for(int i=0; i<n; i++)
    {
        cin>>main;
        cin>>dup;
        len1=main.size();
        len2=main.size();
        if(len1 != len2)
            printf("No\n");
        else
        {
            for(int i=0; i<len1; i++)
            {
                if(main[i] == 'a' || main[i] == 'e' || main[i] == 'i' || main[i] == 'o' || main[i] == 'u' )
                {
                    main.erase(i,1);
                }
                if(dup[i] == 'a' || dup[i] == 'e' || dup[i] == 'i' || dup[i] == 'o' || dup[i] == 'u' )
                {
                    dup.erase(i,1);
                }
            }
            if(main==dup)
                printf("Yes\n");
            else
                printf("No\n");
        }


    }
    return 0;
}
