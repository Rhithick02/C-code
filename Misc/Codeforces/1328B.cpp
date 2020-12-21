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

lli find_x(lli k) {
    lli ans = 0;
    lli low = 1, high = 1e5, mid;
    while(low <= high) {
        mid = low + high >> 1;
        if(mid * (mid-1) / 2 > k) {
            high = mid - 1;
        } else {
            ans = max(ans, mid);
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli n, k;
        cin >> n >> k;
        lli times = find_x(k-1);
        string s(n, ' ');
        s[n-1-times] = 'b';
        lli rem = k - times * (times-1) / 2;
        s[n-rem] = 'b';
        For(i, 0, n) {
            if(s[i] == ' ') s[i] = 'a';
        }
        cout << s << "\n";
    }
}