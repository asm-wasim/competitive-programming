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
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
int main() {
    char ch[105];
    int i,j,flag=0;
    scanf("%s",ch);
    for(i=0; ch[i]!='\0'; i++) {
        int cnt=0;
        for(j=i; j<i+7; j++) {
            if(ch[j]==ch[j+1])
                cnt++;
            else
                break;
        }
        if(cnt>=6) {
            flag=1;
            printf("YES\n");
            break;
        }

    }
    if(flag==0) {
        printf("NO\n");
    }
    return 0;

}
