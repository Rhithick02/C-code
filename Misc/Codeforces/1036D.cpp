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
    int n, m, cnt = 0;
    cin >> n;
    lli tot[2] = {0}, sum[2] = {0};
    vector <lli> a(n);
    For(i, 0, n) {
        cin >> a[i];
        tot[0] += a[i];
    }
    cin >> m;
    vector <lli> b(m);
    For(i, 0, m) {
        cin >> b[i];
        tot[1] += b[i];
    }
    if(tot[0] != tot[1]) {
        cout << "-1\n";
        exit(0);
    }
    sum[0] = a[0], sum[1] = b[0];
    for(int i = 1, j = 1; i <= n && j <= m;) {
        if(sum[0] < sum[1])
            sum[0] += a[i++];
        else if(sum[0] > sum[1])
            sum[1] += b[j++];
        else {
            cnt++;
            sum[0] = a[i++];
            sum[1] = b[j++];
        }
    }
    cout << cnt << "\n";
}