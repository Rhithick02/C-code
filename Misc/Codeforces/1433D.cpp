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
        int n;
        cin >> n;
        map <int, int> mp;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        if(*min_element(asc(ar)) == *max_element(asc(ar)))
            cout << "NO\n";
        else {
            cout << "YES\n";
            pair <int, int> te = {0, 2e9};
            for(auto it: mp) {
                if(te.se < it.se) {
                    te = it;
                }
            }
            int pos = 0, ind = 0;
            For(i, 0, n) {
                if(ar[i] == te.fi) {
                    pos = i;
                    break;
                }
            }
            For(i, 0, n) {
                if(ar[pos] != ar[i]) {
                    cout << pos + 1 << " " << i + 1 << "\n";
                    ind = i;
                }
            }
            For(i, 0, n) {
                if(ar[i] == ar[pos] && i != pos)
                    cout << ind + 1 << " " << i + 1 << "\n";
            }
        }
    }
}