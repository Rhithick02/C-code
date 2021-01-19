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
    vector <bool> isprime(20030, true);
    for(int i = 2; i * i <= 20029; i++) {
        if(!isprime[i]) continue;
        for(int j = i * i; j <= 20029; j += i) {
            isprime[j] = false;
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int d, num[2];
        cin >> d;
        for(int i = 1+d; ; i++) {
            if(isprime[i]) {
                num[0] = i;
                break;
            }
        }
        for(int i = num[0]+d; ; i++) {
            if(isprime[i]) {
                num[1] = i;
                break;
            }
        }
        cout << 1ll * num[0] * num[1] << "\n";
    }
}