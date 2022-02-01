

#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define ld long double
#define fv first
#define sv second
#define pb push_back
#define mp make_pair
#define in insert
#define forloop(x,y,z) for(int x=y; x<z; x++)
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    IOS
    string str,temp="HH:MM";
    cin>>str;
    temp[0]=str[0];
    temp[1]=str[1];
    temp[3]=str[1];
    temp[4]=str[0];
    int hour=((str[0]-'0')*10)+(str[1]-'0');
    int minu=((str[3]-'0')*10)+(str[4]-'0');
    int minutemp=((temp[3]-'0')*10)+(temp[4]-'0');
    if(minu<= minutemp && minutemp < 60) {
        cout<<minutemp-minu<<endl;
    } else if(hour==23 && minu>32) {
        cout<<60-minu<<endl;
    } else if(hour==5 && minu>50) {
        minu+=(hour*60);
        cout<<601-minu<<endl;
    } else if(hour>=6 && hour<=9) {
        minu+=(hour*60);
        cout<<601-minu<<endl;
    } else if(hour>=16 && hour<=19) {
        minu+=(hour*60);
        cout<<1202-minu<<endl;
    } else if(hour==15 && minu>51) {
        minu+=(hour*60);
        cout<<1202-minu<<endl;
    } else {
        int cur=str[1]-'0';
        cur++;
        str[1]=cur+'0';
        temp[0]=str[0];
        temp[1]=str[1];
        temp[3]=str[1];
        temp[4]=str[0];
        minu+=(hour*60);
        int thour=((temp[0]-'0')*10)+(temp[1]-'0');
        int tminu=((temp[3]-'0')*10)+(temp[4]-'0');
        tminu+=(thour*60);
        cout<<tminu-minu<<endl;
    }
    return 0;
}

