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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int k = 0;
    string s, t;
    cin >> s >> t;
    vector <int> lps(t.length());
    for(int i = 1; i < t.length();) {
        if(t[i] == t[k]) {
            lps[i++] = ++k;
        } else {
            if(k) {
               k = lps[k-1]; 
            } else {
                lps[i++] = 0;
            }
        }
    }
    k = 0;
    int cnt = 0;
    for(int i = 0; i < s.length();) {
        if(s[i] == t[k]) {
            i++, k++;
        } else {
            if(k) k = lps[k-1];
            else i++;
        }
        if(k == t.length()) {
            cnt++;
            k = lps[k-1];
        }
    }
    cout << cnt << endl;
}