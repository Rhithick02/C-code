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
    int t, x, sum = 0;
    cin >> t;
    For(i, 0, t){
        cin >> x;
        sum += x;
    }
    cout << sum << "\n";
}