// #pragma GCC optimize("Ofast")
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
    double sum = 0;
    int n, x;
    cin >> n;
    For(i, 0, n) cin >> x;
    For(i, 1, n+1) sum += 1000000.0/i;
    int te = round(sum);
    cout << std::fixed;
    cout << setprecision(6) << 1.0*(round(sum)/1000000);
}