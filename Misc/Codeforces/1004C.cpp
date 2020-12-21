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
    lli n, cnt = 0;
    cin >> n;
    set <lli> te;
    vector <lli> ar(n), suf(n+1), pref(n+1);
    For(i ,0, n) {
        cin >> ar[i];
        if(te.find(ar[i]) == te.end())
            te.insert(ar[i]);
        pref[i+1] = te.size();
    }
    te.clear();
    For(i, 0, n) {
        if(te.find(ar[n-1-i]) == te.end())
            te.insert(ar[n-1-i]);
        suf[n-1-i] = te.size();
    }
    For(i, 1, n+1) {
        if(pref[i] == pref[i-1]) continue;
        cnt += suf[i];
    }
    cout << cnt << "\n";
}