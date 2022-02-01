/****************#####  Bismillah-ir-Rahman-ir-Rahim   #####*************
__________________________________________________________________________
######################   A.S.M. Wasim (Exo_Tic)  #########################
######################        LU-CSE-47          #########################
*************************************************************************/

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
const int mod=1e9+7,mx=1e6+5,lim=105;
int dx [] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dy [] = {0, 1, 0, -1, 1, 1, -1, -1};

char grid [lim][lim];
bool vis [lim][lim];
int row, col, cnt;

void dfs (int r, int c) {
    if ( r == row || r < 0 || c == col || c < 0 || grid [r] [c] == 'L' || vis [r] [c] )
        return;

    vis [r] [c] = true;
    cnt++;
    for ( int i = 0; i < 8; i++ )
        dfs (r + dx [i], c + dy [i]);
}

int main() {


    int cas=0,t;
    scanf ("%d", &t);
    getchar ();
    getchar ();
    bool blank = false;

    while ( t-- ) {
        char inp [1000];
        row = col = 0;
        if ( blank )
            printf ("\n");
        blank = true;

        while ( gets (inp) && strlen (inp) > 0 ) {
            if ( inp [0] == 'L' || inp [0] == 'W' ) {
                strcpy (grid [row], inp);
                col = strlen (inp);
                row++;
            } else {
                int r, c;
                sscanf(inp, "%d %d", &r, &c);
                cnt = 0;
                memset(vis,0,sizeof vis);
                dfs (r - 1, c - 1);
                printf ("%d\n", cnt);
            }
        }
    }

    return 0;
}

