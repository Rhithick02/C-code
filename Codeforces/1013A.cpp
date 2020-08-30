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
    int n, x, sum[2] = {0};
    cin >> n;
    For(i, 0, n) {
        cin >> x;
        sum[0] += x;
    }
    For(i, 0, n) {
        cin >> x;
        sum[1] += x;
    }
    if(sum[1] > sum[0]) cout << "No\n";
    else cout << "Yes\n";
}