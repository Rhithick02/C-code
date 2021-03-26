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

int power(int x, int y) {
    int res = 1;
    while(y > 0) {
        if(y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
int find_close(int x) {
    int low = 0, high = 31, mid, ans = 100;
    while(low <= high) {
        mid = low + high >> 1;
        if(power(2, mid) >= x) {
            high = mid - 1;
            ans = min(ans, mid);
        } else {
            low = mid + 1;
        }
    }
    return power(2, ans);
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            cout << find_close((ar[i] + 1) / 2) << " ";
        }        
        cout << "\n";
    }
}