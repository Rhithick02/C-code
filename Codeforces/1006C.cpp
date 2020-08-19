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
    lli n, sum[2] = {0}, maxi = 0;
    cin >> n;
    vector <lli> ar(n);
    For(i, 0, n) cin >> ar[i];
    if(n == 1) {
        cout << 0 << endl;
        exit(0);
    }
    sum[0] = ar[0], sum[1] = ar[n-1];
    if(sum[0] == sum[1]) maxi = sum[0];
    for(int i = 0, j = n - 1; i < j;) {
        if(sum[0] > sum[1])
            sum[1] += ar[--j];
        else if(sum[0] < sum[1])
            sum[0] += ar[++i];
        if(sum[0] == sum[1]) {
            maxi = sum[0];
            sum[0] += ar[++i];
            sum[1] += ar[--j];
        }
    }
    cout << maxi << endl;
}