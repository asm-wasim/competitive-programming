
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);

double pABC,aABC,ab,ac,bc,Ratio;
double FindRatio(double ad) {
    double ae= (ad*ac)/ab;
    double de= (ad*bc)/ab;
    double pADE= (ad+de+ae)/2.0;
    double aADE= sqrt(pADE*(pADE-ad)*(pADE-de)*(pADE-ae));
    double aBDEC= aABC-aADE;
    return aADE/aBDEC;
}

double BinarySearch() {
    double ret,mid,low=0.0,high=ab;
    for(int i=0; i<50; i++) {
        mid= (low+high)/2.0;
        ret=FindRatio(mid);
        if(ret==Ratio) {
            break;
        } else if(ret>Ratio) {
            high=mid;
        } else {
            low=mid;
        }
    }
    return mid;
}

int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    while(t--) {
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&Ratio);
        pABC= (ab+ac+bc)/2.0;
        aABC= sqrt(pABC *(pABC-ab)*(pABC-ac)*(pABC-bc));
        double ad= BinarySearch();
        printf("Case %d: %.10lf\n",++cas,ad);
    }
    return 0;
}

