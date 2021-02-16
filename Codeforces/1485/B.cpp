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
    lli n, q, k, l, r;
    cin >> n >> q >> k;
    vector <lli> ar(n), store(n+1);
    For(i, 0, n) cin >> ar[i];
    if(n == 1) {
        For(i, 0, q) {
            cin >> l >> r;
            cout << k - 1 << "\n";
        }
        exit(0);
    }
    For(i, 0, n) {
        if(i == 0) {
            store[i+1] = ar[i+1] - 2;
        } else if(i == n-1) {
            store[i+1] = k - ar[i-1] - 1;
        } else {
            store[i+1] = ar[i+1] - ar[i-1] - 2;
        }
    }
    For(i, 1, n+1) {
        store[i] += store[i-1];
    }
    For(i, 0, q) {
        cin >> l >> r;
        lli temp = store[r] - store[l-1];
        if(l != 1) {
            temp += ar[l-2];
        }
        if(r != n) {
            temp += k - ar[r] + 1;
        }
        cout <<  temp << "\n";
    }
}