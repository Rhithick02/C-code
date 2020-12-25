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
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0, te = 0;
        cin >> n;
        deque <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        if(ar[0]) {
            cnt++;
            ar.pop_front();
        }
        while(ar.size()) {
            if(ar[0]) te++;
            else {
                cnt += te / 3;
                te = 0;
            }
            ar.pop_front();
        }
        cout << cnt + te / 3 << "\n";
    }
}