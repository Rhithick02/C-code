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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int t;
    cin >> t;
    for(int j = 1; j <= t; j++) {
        int n, l, r, s;
        cin >> n >> l >> r >> s;
        int k = r - l + 1;
        int sum = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
        if(s > sum || s < (k * (k + 1) / 2)) {
            cout << "-1\n";
            continue;
        }
        vector <int> ans(n);
        int last = n, start = l-1;
        sum = 0, k = r - l;
        while(sum < s) {
            while(sum + last + k * (k + 1) / 2 > s) {
                last--;
            }
            ans[start++] = last;
            sum += last--;
            k--;
        }
        set <int> te;
        for(int i = l-1; i < r; i++) {
            te.insert(ans[i]);
        }
        k = 0;
        for(int i = 1; i <= n; i++) {
            if(te.find(i) != te.end()) {
                continue;
            }
            if(k == l-1) k = r;
            ans[k++] = i;
        }
        for(auto it: ans) cout << it << " ";
        cout << "\n";
    }
}