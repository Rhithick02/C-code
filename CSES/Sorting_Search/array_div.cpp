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

bool can(lli mid, int k, vector <int> ar) {
    int n = ar.size(), cnt = 0;
    lli sum = 0;
    For(i, 0, n) {
        if(ar[i] > mid) return false;
        sum += ar[i];
        if(sum > mid) {
            sum = ar[i];
            cnt++;
        } 
    }
    if(cnt < k) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector <int> ar(n);
    For(i, 0, n) cin >> ar[i];
    lli low = 1, high = 2e18, mid, sum = 2e18;
    while(low <= high) {
        mid = low + high >> 1;
        if(can(mid, k, ar)) {
            high = mid - 1;
            sum = min(sum, mid);
        } else {
            low = mid + 1;
        }
    }
    cout << sum << endl;
}