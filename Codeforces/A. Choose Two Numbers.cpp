#include <bits/stdc++.h>
using namespace std;
int check[500];
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    int A[n+4];
    for(int i=0; i<n; i++) {
        cin>>A[i];
        check[A[i]]=1;
    }
    cin>>m;
    int B[n+4];
    for(int i=0; i<m; i++) {
        cin>>B[i];
        check[B[i]]=1;
    }
    int a,b;
    bool flag=false;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int x= A[i]+B[j];
            if(check[x]==0) {
                a=A[i],b=B[j];
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
    cout<<a<<" "<<b<<endl;
}
//
//#include <bits/stdc++.h>
//using namespace std;
//#define ll    long long
//
//int main() {
//    ll n,m;
//    cin>>n;
//
//    vector <ll> vec_n(n),check(100000,0);
//
//    for (int i=0; i<n; i++)
//        cin>>vec_n[i],check[vec_n[i]]=1;
//
//    cin>>m;
//
//    vector <ll> vec_m(m);
//
//    for (int i=0; i<m; i++)
//        cin>>vec_m[i],check[vec_m[i]]=1;
//
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<m; j++) {
//            if (!check[vec_n[i]+vec_m[j]]) {
//                cout<<vec_n[i]<<" "<<vec_m[j]<<endl;
//                return 0;
//            }
//        }
//    }
//    return 0;
//}
