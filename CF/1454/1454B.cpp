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
        bool ok = false;
        int n;
        cin >> n;
        vector <pair<int, int>> ar(n);
        For(i, 0, n) {
            cin >> ar[i].fi;
            ar[i].se = i+1;
        }
        sort(asc(ar));
        For(i, 0, n) {
            if(i != n-1 && ar[i].fi == ar[i+1].fi) continue;
            if(i && ar[i].fi == ar[i-1].fi) continue;
            cout << ar[i].se << "\n";
            ok = true;
            break;
        }
        if(!ok) cout << "-1\n";
    }
}