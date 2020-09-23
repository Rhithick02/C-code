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
    int n, m, x, cnt = 0;
    cin >> m >> n;
    string s(n, ' ');
    For(i, 0, n) {
        cout << "1\n" << flush;
        cin >> x;
        if(!x || x == -2) exit(0);
        if(x > 0) s[i] = '1';
        else s[i] = '0';
    }
    int low = 1, high = m, mid;
    while(low <= high) {
        mid = low + high >> 1;
        cout << mid << "\n" << flush;
        cin >> x;
        if(!x || x == -2) exit(0);
        if(s[cnt % n] == '1') {
            if(x > 0) low = mid + 1;
            else high = mid - 1;
        }
        else {
            if(x > 0) high = mid - 1;
            else low = mid + 1;
        }
        cnt++;
    }
}