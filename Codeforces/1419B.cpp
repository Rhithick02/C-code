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
    vector <lli> ar;
    For(i, 1, 61) {
        ar.pb((1LL * 1 << i) - 1);
    }
    while(t--) {
        int cnt = 0;
        lli x, sum = 0;
        cin >> x;
        For(i, 0, 60) {
            lli te = (ar[i] * (ar[i] + 1)) / 2;
            if(sum + te <= x) {
                cnt++;
                sum += te;
            } else break;
        }
        cout << cnt << "\n";
    }
    
}