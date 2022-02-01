
#include <bits/stdc++.h>
using namespace std;
#define LL           long long
#define ULL          unsigned long long
#define PII          pair<int,int>
#define PII          pair<int,int>
#define PLL          pair<LL,LL>
#define SORT(x)      sort(x.begin(),x.end())
#define SORTD(x)     sort(x.rbegin(),x.rend())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
const LL mod=1e9+7,INF=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0,N;

struct exo{
    int p1,p2,p3;

    exo(){}

    exo(int p1, int p2, int p3){
        this -> p1=p1;
        this -> p2=p2;
        this -> p3=p3;
    }
};

vector <exo> Triple;
vector <int> permut;
map <int,int> ID;

int Find_Next(int x,int y){
    int siz= Triple.size();
    int z=0;
    for(int i=0; i<siz; i++){
        if(Triple[i].p1==x && Triple[i].p2==y) z=Triple[i].p3;
        else if(Triple[i].p1==x && Triple[i].p3==y ) z=Triple[i].p2;
        else if(Triple[i].p2==x && Triple[i].p1==y ) z=Triple[i].p3;
        else if(Triple[i].p2==x && Triple[i].p3==y ) z=Triple[i].p1;
        else if(Triple[i].p3==x && Triple[i].p1==y ) z=Triple[i].p2;
        else if(Triple[i].p3==x && Triple[i].p2==y ) z=Triple[i].p1;
        if(z!=0){
            Triple.erase(Triple.begin()+i);
            return z;
        }
    }
}


int main() {
    Fast_Input

    while(testCase--) {
        int n; cin>>n;

        int starter=0,ender=0,x,y,z, tripleId=0;
        int Fre[n+5]={0};

        for(int i=0; i<n-2; i++){
            cin>>x>>y>>z;
            Triple.push_back(exo(x,y,z));
            Fre[x]++, Fre[y]++, Fre[z]++;
            ID[x]=ID[y]=ID[z]=tripleId++;
        }
        int k=1;
        while(k<=n){

            if( Fre[k]==1){
                starter=k;
                break;
            }
            k++;
        }
        //cout<<starter<< ' '<<ender<<endl;
        //cout<<ID[starter]<<" "<<ID[ender]<<endl;
        int pos=ID[starter];
        permut.push_back(starter);

        if(Triple[pos].p1 != starter) permut.push_back(Triple[pos].p1);
        if(Triple[pos].p2 != starter) permut.push_back(Triple[pos].p2);
        if(Triple[pos].p3 != starter) permut.push_back(Triple[pos].p3);

        Triple.erase(Triple.begin()+pos);

        int siz= permut.size();

        while(siz<n){
            int x= permut[siz-2];
            int y= permut[siz-1];
            int z= Find_Next(x,y);
            permut.push_back(z);
            siz++;
        }
        for(auto i : permut) cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}

