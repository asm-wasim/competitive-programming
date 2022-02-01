#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define SFTL(x,y,z)    scanf("%lld %lld %lld",&x,&y,&z)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int main() {
    Fast_Input
    string str="",temp="";
    map<string,int> mp;
    int pos=1;
    for(char ch='a'; ch<='z'; ch++) {
        str+=ch;
        temp=ch;
        mp[temp]=pos;
        pos++;
    }
    string aa,bb,cc,dd,ee;
    int len=str.size();
    for(int i=0; i<len-1; i++) {
        aa=str[i];
        for(int j=i+1; j<len; j++) {
            bb=aa+str[j];
            mp[bb]=pos;
            pos++;
        }
    }
    for(int i=0; i<len-2; i++) {
        aa=str[i];
        for(int j=i+1; j<len-1; j++) {
            bb=aa+str[j];
            for(int k=j+1; k<len; k++) {
                cc=bb+str[k];
                mp[cc]=pos;
                pos++;
                //cout<<cc<<endl;
            }
        }
    }
    for(int i=0; i<len-3; i++) {
        aa=str[i];
        for(int j=i+1; j<len-2; j++) {
            bb=aa+str[j];
            for(int k=j+1; k<len-1; k++) {
                cc=bb+str[k];
                for(int l=k+1; l<len; l++) {
                    dd=cc+str[l];
                    mp[dd]=pos;
                    pos++;
                }
            }
        }
    }
    for(int i=0; i<len-4; i++) {
        aa=str[i];
        for(int j=i+1; j<len-3; j++) {
            bb=aa+str[j];
            for(int k=j+1; k<len-2; k++) {
                cc=bb+str[k];
                for(int l=k+1; l<len-1; l++) {
                    dd=cc+str[l];
                    for(int m=l+1; m<len; m++) {
                        ee=dd+str[m];
                        mp[ee]=pos;
                        pos++;
                        //cout<<ee<<" "<<pos<<endl;
                    }
                }
            }
        }
    }
//    for(map<string,int>::iterator it=mp.begin();it!=mp.end(); it++)
//        cout<<it->FV<<" "<<it->SV<<endl;
    bool flag;
    while(cin>>temp) {
        len=temp.size();
        flag=true;
        for(int i=1; i<len; i++){
            if(temp[i]<temp[i-1]){
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<mp[temp]<<endl;
        else
        cout<<"0"<<endl;
    }
    return 0;
}

