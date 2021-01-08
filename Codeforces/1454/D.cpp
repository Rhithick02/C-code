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
    cin >> t;
    while(t--) {
        lli n, st;
        cin >> n;
        st = n;
        vector <pair<int, lli>> ar;
        for(lli i = 2; i * i <= n; i++) {
            int cnt = 0;
            while(n % i == 0) {
                n /= i;
                cnt++;
            }
            if(cnt <= 1) continue;
            ar.pb({cnt, i});
        }
        if(!ar.size()) {
            cout << "1\n" << st << "\n";
            continue;
        }
        sort(des(ar));
        cout << ar[0].fi << "\n";
        lli prod = 1;
        For(i, 0, ar[0].fi-1)  {
            cout << ar[0].se << " ";
            prod *= ar[0].se;
        }
        cout << st / prod << "\n";
    }
}