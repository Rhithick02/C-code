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
    vector <pair<int, int>> ar(5);
    For(i, 0, 5) ar[i] = {i, i};
    ar.erase(ar.begin() + 1);
    For(i, 0, 4) cout << ar[i].fi << " " << ar[i].se << "\n";
}