#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector <lli> ar(m);
    multiset <lli> st;
    For(i, 0, m) cin >> ar[i];
    sort(des(ar));
    For(i, 0, n) st.insert(ar[i]);
    For(i, n, m) {
        lli te = *st.begin();
        st.erase(st.begin()); // Removing the nth smallest value.
        st.insert(te + ar[i]); // adding nth value and greatest number of unused brick.
    }
    cout << *st.begin() << endl;
}