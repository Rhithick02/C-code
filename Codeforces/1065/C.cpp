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
#define MAX 200001
vector<lli> st(MAX);
void suf() {
    for(int i = MAX-2; i >= 0; i--)
        st[i] += st[i+1];
}
int main(){
    ios::sync_with_stdio(false);
    lli sum = 0, prev = 0, n, k, mini = MAX, cnt = 0, maxi = 0;
    cin >> n >> k;
    vector <lli> ar(n);
    For(i, 0, n) {
        cin >> ar[i];
        st[--ar[i]]++;
        mini = min(mini, ar[i] + 1);
        maxi = max(maxi, ar[i] + 1);
    }
    if (mini == maxi) {
        cout << "0\n";
        exit(0);
    }
    For (i, 0, 2)
        suf();
    for(int i = maxi-1; i >= mini; i--) {
        if(st[i] - prev > k) {
            cnt++;
            prev = st[i+1];
            i++;
        }
    }
    cout << cnt + 1 << "\n";
}