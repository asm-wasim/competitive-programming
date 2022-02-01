
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("card.txt","r",stdin);
    deque <int> deck;
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==1)
        {
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: "<<n<<endl;

        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                deck.push_back(i);
            }
            cout<<"Discarded cards: ";
            while(deck.size()>2)
            {
                cout<<deck.front()<<", ";
                deck.pop_front();
                int a=deck.front();
                deck.push_back(a);
                deck.pop_front();
            }
            cout<<deck.front()<<endl;
            deck.pop_front();
            cout<<"Remaining card: "<<deck.front()<<endl;
            deck.clear();
        }
    }
    return 0;
}
