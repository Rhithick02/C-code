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
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t;
    vector <bool> isprime(1005, true);
    isprime[1] = false;
    for(int i = 2; i <= 1000; i++) {
        if(!isprime[i]) continue;
        for(int j = i * i; j <= 1000; j += i)
            isprime[j] = false;
    }
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        For(i, 1, 1000) {
            if(isprime[i+n-1] && !isprime[i]) {
                x = i;
                break;
            }
        }
        For(i, 0, n) {
            For(j, 0, n) {
                if(i == j) cout << x << " ";
                else cout << "1 ";
            }
            cout << "\n";
        }
    }
}