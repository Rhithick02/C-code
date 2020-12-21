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
lli a, b, low = 0, high = 1e5, mid, ans = 0, sum = 0;
int cnt = 0;
void fuct(lli x, vector <lli> &ar) {
    for(int i = ans; i >= 1; i--) {
        if(sum + i <= x) {
            sum += i;
            ar[i] = -1;
            cnt++;
        }
    }
}
void te1(vector <lli> ar) {
    cout << cnt << "\n";
    For(i, 1, ans + 1) {
        if(ar[i] == -1) 
            cout << i << " ";
    }
}
void te2(vector <lli> ar) {
    cout << ans - cnt << "\n";
    For(i, 1, ans + 1) {
        if(ar[i] != -1)
            cout << i << " ";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin >> a >> b;
    while(low <= high) {
        mid = low + high >> 1;
        if(mid * (mid + 1) / 2 <= a + b) {
            low = mid + 1;
            ans = mid;
        }
        else high = mid - 1;
    }
    vector <lli> ar(ans + 1);
    For(i, 1, ans + 1) ar[i] = i;
    if(a >= b) {
        fuct(a, ar);
        te1(ar);
        cout << endl;
        te2(ar);
    }
    else {
        fuct(b, ar);
        te2(ar);
        cout << endl;
        te1(ar);
    }
    cout << "\n";
}