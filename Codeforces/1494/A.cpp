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

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int tot = 0;
        vector <int> cnt(3);
        vector <char> st;
        string s;
        cin >> s;
        bool ok = true, check = true;
        int n = s.length();
        char op = s[0], en = s[n-1];
        if(op == en) {
            cout << "NO\n";
            continue;
        }
        For(i, 0, n) {
            cnt[s[i]-'A']++;
        }
        if((cnt[0] + cnt[1] != cnt[2]) && (cnt[1] + cnt[2] != cnt[0]) && (cnt[0] + cnt[2] != cnt[1])) {
            cout << "NO\n";
            continue;
        }
        if(cnt[op-'A'] > cnt[en-'A']) {
            check = false;
        }
        if(!check) {
            For(i, 0, n) {
                if(s[i] != op) {
                    s[i] = ')';
                } else {
                    s[i] = '(';
                }
            }
        } else {
            For(i, 0, n) {
                if(s[i] != en) {
                    s[i] = '(';
                } else {
                    s[i] = ')';
                }
            }
        }
        For(i, 0, n) {
            if(s[i] == '(') tot++;
            else {
                if(!tot) ok = false;
                else tot--;
            }
        }
        if(tot || !ok) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}