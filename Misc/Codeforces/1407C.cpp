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
int ask(int x, int y) {
    int res;
    cout << "? " << x + 1 << " " << y + 1 << "\n" << flush;
    cin >> res;
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    int n, track = 0;
    cin >> n;
    vector <int> ar(n);
    For(i, 1, n) {
        int x = ask(track, i);
        int y = ask(i, track);
        if(x > y) {
            ar[track] = x;
            track = i;
        }
        else ar[i] = y;
    }
    ar[track] = n;
    cout << "! " << flush;
    for(auto it: ar) cout << it << " " << flush;
    cout << endl;
}