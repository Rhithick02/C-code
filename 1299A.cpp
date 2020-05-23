#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define fi first
#define se second

int main(){
    int n;
    cin>>n;
    vi ar(n);
    For(i,n) cin>>ar[i];
    sort(des(ar));
    For(i,n) cout<<ar[i]<<" ";
    return 0;
}