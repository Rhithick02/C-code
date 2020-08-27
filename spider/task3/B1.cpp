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
    // This algorithm is not completely correct as it does not work for all test cases.
    int n, m;
    cin >> n >> m;
    vector <lli> ar(m);
    multiset <lli> st;
    For(i, 0, m) cin >> ar[i];
    sort(des(ar)); // Sorting in descending order
    For(i, 0, n) st.insert(ar[i]); // Inserting first n numbers
    For(i, n, m) {
        lli te = *st.begin();
        st.erase(st.begin()); // Removing the nth largest value.
        st.insert(te + ar[i]); // adding nth largest value and greatest strength of unused brick.
    }
    cout << *st.begin() << endl;
}