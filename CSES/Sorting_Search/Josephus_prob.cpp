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
    int n, cnt = -1, v = 0;
    cin >> n;
    vector <int> ar(n);
    For(i, 0, n) ar[i] = i+1;
    while(v < n) {
        if(ar[(cnt+1) % n] != mod && ar[(cnt+2) % n] != mod) {
            cnt = (cnt + 2) % n;
        } else if(ar[(cnt+1) % n] != mod) {
            cnt = (cnt+2) % n;
            while(ar[cnt] == mod) cnt = (cnt + 1) % n;
        } else {
            cnt = (cnt+1) % n;
            while(ar[cnt] == mod) cnt = (cnt + 1) % n;
            cnt = (cnt+1) % n;
            while(ar[cnt] == mod) cnt = (cnt + 1) % n;
        }
        cout << ar[cnt] << " ";
        ar[cnt] = mod;
        v++;
    }
    cout << "\n";
}