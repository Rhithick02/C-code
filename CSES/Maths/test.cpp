#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    // Finding smallest prime factors in O(nloglogn)
    vector <int> prime(1e6 + 5);
    For(i, 0, 1e6 + 5) prime[i] = i;
    for(lli i = 2; i <= 1e6; i++) {
        if(prime[i] != i) continue;
        for(lli j = i*i; j <= 1e6; j += i) {
            if(prime[j] == j) prime[j] = i;
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        cin >> n;
        while(prime[n] != 1) {
            n /= prime[n];
            cnt++;
        }
        cout << cnt + 1 << "\n";
    }
}