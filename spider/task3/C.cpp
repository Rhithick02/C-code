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
    lli sum = 0;
    int n, cnt = 1;
    cin >> n;
    vector <int> ar(n + 1);
    for(int i = 2; i <= n; i++) {
        int fl = 0;
        for(int j = i; j <= n; j += i) {
            if(ar[j]) continue;
            ar[j] = cnt;
            fl = 1;
        }
        if(fl) {
            sum += cnt;
            cnt++;
        }
    }
    cout << sum << endl;
}