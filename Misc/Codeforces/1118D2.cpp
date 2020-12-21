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
    lli n, m, te = 0, res;
    cin >> n >> m;
    vector <lli> ar(n);
    For(i, 0, n) {
        cin >> ar[i];
        te += ar[i];
    }
    if(te < m) {
        cout << "-1\n";
        exit(0);
    }
    sort(des(ar));
    lli low = 1, high = n, mid;
    while(low <= high) {
        mid = low + high >> 1;
        lli sum = 0;
        For(i, 0, n)
            sum += max(1LL * 0, ar[i] - i / mid);
        if(sum >= m) {
            high = mid - 1;
            res = mid;
        }
        else low = mid + 1;
    }
    cout << res << "\n";
}