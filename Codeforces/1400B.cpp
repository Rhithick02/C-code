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
    while(t--) {
        lli p, f, cnt[2] = {0}, weight[2] = {0};
        cin >> p >> f >> cnt[0] >> cnt[1] >> weight[0] >> weight[1];
        int sword = min(cnt[0], p / weight[0]), axe = min(cnt[1], f / weight[1]);
        cnt[0] -= sword,  cnt[1] -= axe;
    }
}