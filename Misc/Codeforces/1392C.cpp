#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        lli n, ans = 0;
        cin >> n;
        vector <lli> ar(n);
        For(i , 0, n) cin >> ar[i];
        For(i, 0, n-1) 
            ans += max(1LL*0,ar[i]-ar[i+1]);
        cout << ans << "\n";
    }
}