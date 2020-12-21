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

lli power(lli x, lli y) {
    lli res = 1;
    while(y > 0) {
        if(y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
int sum_of_digits(lli num) {
    int sum = 0;
    while(num) {
        sum += num % 10;
        num /= 10; 
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli n, te;
        int s, sum = 0, cnt = 0;
        cin >> n >> s;
        sum = sum_of_digits(n);
        te = n;
        while(sum > s) {
            int st = te % 10;
            te /= 10;
            if(st) te++;
            sum = sum_of_digits(te);
            cnt++;
        }
        te = te * power(10, cnt);
        cout << te - n << "\n";
    }
}