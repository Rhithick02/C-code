#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,k;
    cin>>n>>k;
    vi ar(n);
    set<int> se;
    For(i,n) cin>>ar[i];
    sort(ar.begin(),ar.end());
    For(i,n-k+1) se.insert(ar[i+k-1]-ar[i]);
    cout<<*se.begin()<<endl;
    return 0;
}