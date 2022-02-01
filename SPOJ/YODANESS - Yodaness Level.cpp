#include <bits/stdc++.h>
using namespace std;
#define fv           first
#define sv           second
#define ll           long long
#define pll          pair<ll,ll>
#define pii          pair<int,int>
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define isWorking()  cout<<"Wroking"<<endl
#define FOR(i,x,y)   for(int i=x; i<y; i++)
#define SORT(x)      sort(x.begin(),x.end())
#define Fast_Input   ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const ll mod= 1e9+7 ,INF=1e18,mx= 1e5+5,mn=100;
int testCase=1,cas=0;

ll mergeSegment(int ar[],int temp[],int L,int mid,int R){

    ll cnt=0;

    int i=L,j=mid,k=L;

    while( i<mid && j<=R ){

        if(ar[i]<=ar[j]){

            temp[k++]=ar[i++];

        }else{
            temp[k++]=ar[j++];

            cnt+=(mid-i);
        }

    }

    while(i<mid) temp[k++]=ar[i++];
    while(j<=R) temp[k++]=ar[j++];

    while(L<=R) ar[L]=temp[L],L++;

    return cnt;
}

ll DivideSegment(int ar[],int temp[],int L,int R){

    ll cnt=0;

    if(L<R){

        int mid=(L+R)>>1;

        cnt+=DivideSegment(ar,temp,L,mid);
        cnt+=DivideSegment(ar,temp,mid+1,R);

        cnt+=mergeSegment(ar,temp,L,mid+1,R);
    }

    return cnt;
}

int main() {
    Fast_Input

    cin>>testCase;
    while(testCase--) {
        int n; cin>>n;

        vector <string> NotOrdered(n),Ordered(n);
        map <string,int> Ranking;
        int Rank=0;

        for(int i=0; i<n; i++){
            cin>>NotOrdered[i];
        }

        for(int i=0; i<n; i++){
            cin>>Ordered[i];
            Ranking[ Ordered[i] ]=++Rank;
        }

        int ar[n];

        for(int i=0; i<n; i++){
            ar[i]=Ranking[ NotOrdered[i] ];
        }

        int temp[n];
        cout<<DivideSegment(ar,temp,0,n-1)<<endl;
    }
    return 0;
}

