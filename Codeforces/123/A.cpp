#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n = s.length();
    vector <bool> isprime(1001, true);
    vector <int> alp(26);
    isprime[0] = isprime[1] = false;
    for(int i = 2; i * i <= 1000; i++) {
        if(!isprime[i]) continue;
        for(int j = i * i; j <= 1000; j += i) {
            isprime[j] = false;
        }
    }
    For(i, 0, n) alp[s[i]-'a']++;
    int maxi = max_element(asc(alp)) - alp.begin();
    int cnt = 1;
    for(int i = n/2+1; i <= n; i++) {
        if(isprime[i]) cnt++;
    }
    int need = n - cnt;
    if(alp[maxi] < need) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        string s(n, ' ');
        for(int i = 2; i <= n/2; i++) {
            s[i-1] = 'a' + maxi;
            alp[maxi]--;
        }
        for(int i = n/2+1; i <= n; i++) {
            if(!isprime[i]) {
                s[i-1] = 'a' + maxi;
                alp[maxi]--;
            }
        }
        int tr = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == ' ') {
                while(!alp[tr]) tr++;
                s[i] = 'a' + tr;
                alp[tr]--;
            }
        }
        cout << s << "\n";
    }
}