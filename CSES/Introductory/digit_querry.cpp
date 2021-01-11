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

int no_of_digits(lli x) {
    int cnt = 0;
    while(x) {
        x /= 10;
        cnt++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    vector <lli> ar(20);
    ar[0] = 0;
    For(i, 1, 19) {
        ar[i] += ar[i-1] + 9 * (lli)pow(10, i-1);
    }
    lli t;
    cin >> t;
    while(t--) {
        lli n, qt = 1, num = 9, te;
        cin >> n;
        te = n;
        while(te > qt*num) {
            te -= qt*num;
            qt++;
            num *= 10;
        }
        num = ar[qt-1];
        lli qu = te / qt;
        num += qu;
        int rem = te % qt;
        if(rem) {
            num++;
            int tot = no_of_digits(num);
            For(i, 0, tot-rem) {
                num /= 10;
            }
        }
        cout << num % 10 << "\n";
    }
}