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
    int n, cnt = 0;
    vector<int> ar(n);
    For(i, 0, n) cin >> ar[i];
    For(i, 0, n) {
        vector <int> lis;
        lis.pb(ar[i]);
        For(j, i + 1, n) {
            if(ar[j] > lis.back()) lis.pb(ar[j]);
            else {
                cnt = max(cnt, (int)lis.size());
            }
        }
    }
}