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
    int n;
    cin >> n;
    vector <int> ar(n+1), child(n+1);
    For(i, 2, n + 1) cin >> ar[i];
    for(int i = n; i >= 1; i--) {
        if(!child[i]) child[i] = 1;
        child[ar[i]] += child[i];
    }
    sort(asc(child));
    For(i, 0, n) cout << child[i] << " ";
}