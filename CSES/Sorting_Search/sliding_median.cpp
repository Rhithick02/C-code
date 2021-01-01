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
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector <int> ar(n);
    indexed_set st;
    For(i, 0, n) {
        cin >> ar[i];
        st.insert({ar[i], i});
        if(st.size() == k) {
            auto x = st.find_by_order((k-1)/2);
            cout << (*x).fi << " ";
            st.erase({ar[i-k+1], i-k+1});
        }
    }
}