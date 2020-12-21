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
        int n, ans[2] = {-1, -1};
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        For(i, 0, 101) {
            int cnt = 0;
            For(j, 0, n) if(ar[j] == i) cnt++;
            if(!cnt) {
                if(ans[0] == -1) ans[0] = ans[1] = i;
                else ans[1] = i;
            }
            else if(cnt == 1 && ans[[0] == -1])
                ans[0] = i;
            if(ans[0] > -1 && ans[1] > -1) break;
        }
        cout << ans[0] + ans[1] << "\n";
    }
}