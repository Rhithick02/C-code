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
    // I am also not sure whether this algorithm would work out
    /* I have done binary search to find the answer.
    If there are n elements above or equal to the magnitude of strength we get from binary search,
    then the maximum of such strength is the answer */
    int n, m, cnt = 0;
    cin >> n >> m;
    lli res = 1e18;
    vector <lli> ar(m);
    multiset <lli> st, te;
    For(i, 0, m) {
        cin >> ar[i];
        st.insert(ar[i]);
    }
    lli low = 1, high = 1e18, mid;
    while(low <= high) {
        mid = low + high >> 1;
        cnt = 0;
        te = st;
        while(te.size()) {
            lli temp = *te.rbegin(); // Taking the largest value from the set
            te.erase(--te.end());
            while(temp < mid && te.size()) {
                /* Finding a value from the set that is just above or equal to the difference
                   of required answer and the current number */
                auto it = te.lower_bound(mid - temp);
                if(it == te.end()) it--;
                temp += *it;
                te.erase(it);
            }
            if(temp >= mid) cnt++;  // If the current value exceeds the strength of 'mid' increase the cnt by one
        }
        if(cnt >= n) {
            low = mid + 1;
            res = mid;
        }
        else high = mid - 1;
    }
    cout << res << endl;
}