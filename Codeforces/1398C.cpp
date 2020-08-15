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
    cin>>t;
    while(t--){
        lli n, res = 0, te = 0;
        string s;
        cin >> n >> s;
        map<int, int> mp;
        For(i, 0, n){
            te += s[i] - '0' - 1;
            res += mp[te] + !te;
            mp[te]++;
        }
        cout << res << "\n";
    }
}