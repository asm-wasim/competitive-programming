#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long m,toy;
    map<long long,long long> type;
    vector <long long> ve;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        cin>>toy;
        type[toy]++;
    }
    for(long long i=1; ; i++) {
        if(type[i]==0 && m-i>=0) {
            m-=i;
            ve.push_back(i);
        }
        if(m-i<=0)
            break;
    }

    int len= ve.size();
    cout<<len<<endl;
    for(int i=0; i<len; i++)
        cout<<ve[i]<<" ";
    cout<<endl;
}
