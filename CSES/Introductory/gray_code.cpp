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

string decimal_binary(int val) {
    string res = "";
    while(val) {
        res += '0' + (val % 2);
        val /= 2;
    }
    return res;
}
string binary_gray(string s) {
    int n = s.length();
    For(i, 0, n-1) {
        s[i] = '0' + ((s[i] - '0') ^ (s[i+1] - '0'));
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    For(i, 0, 1 << n) {
        string bin = decimal_binary(i);
        int len = bin.length();
        For(i, len, n) bin += '0';
        string ans = binary_gray(bin);
        reverse(asc(ans));
        cout << ans << "\n";

    }
}