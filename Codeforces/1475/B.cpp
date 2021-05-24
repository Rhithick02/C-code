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
    while(t--) {
        int n;
        bool ok = false;
        cin >> n;
        for(int i = 0; i <= 1000; i++) {
            int temp = n - 2020 * i;
            if(temp < 0) break;
            if(temp % 2021 == 0) {
                ok = true;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}