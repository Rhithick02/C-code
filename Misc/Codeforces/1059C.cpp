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
    int n, maxi = 0, val, fl = 0;
    cin >> n;
    vector <int> st(21);
    maxi = log2(n);
    For(i, 1, n+1) {
        int cnt = 0, te = i;
        while(te % 2 == 0)
            cnt++, te /= 2;
        st[cnt]++;
        if(cnt == maxi - 1 && (1 << cnt != i)) {
            if(!fl) {
                st[maxi]--;
                fl = 1;
            }
            val = i;
        }
    }
    For(i, 0, 21)
        For(j, 0, st[i])
            cout << (1 << i) << " ";
    if(fl) cout << val << " ";
}