#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool comp(const pair<pair<int, int>, int> a, const pair<pair<int, int>, int> b) {
    if(a.fi.fi == b.fi.fi) {
        return a.fi.se > b.fi.se;
    }
    return a.fi.fi < b.fi.fi;
}

bool comp2(const pair<pair<int, int>, int> a, const pair<pair<int, int>, int> b) {
    if(a.fi.se == b.fi.se) {
        return a.fi.fi > b.fi.fi;
    }
    return a.fi.se < b.fi.se;
}

int main() {
    int n;
    cin >> n;
    vector <pair<pair<int, int>, int>> ar(n);
    set <int> suf_min;
    vector <bool> contain(n), be_contain(n);
    for(int i = 0; i < n; i++) {
        cin >> ar[i].fi.fi >> ar[i].fi.se;
        ar[i].se = i;
    }
    sort(ar.begin(), ar.end(), comp);
    for(int i = n-1; i >= 0; i--) {
        if(!suf_min.size()) {
            contain[ar[i].se] = 0;
        } else if(*(suf_min.begin()) <= ar[i].fi.se) {
            contain[ar[i].se] = 1;
        } else {
            contain[ar[i].se] = 0;
        }
        suf_min.insert(ar[i].fi.se);
    }
    suf_min.clear();
    sort(ar.begin(), ar.end(), comp2);
    for(int i = n-1; i >= 0; i--) {
        if(!suf_min.size()) {
            be_contain[ar[i].se] = 0;
        } else if(*(suf_min.begin()) <= ar[i].fi.fi) {
            be_contain[ar[i].se] = 1;
        } else {
            be_contain[ar[i].se] = 0;
        }
        suf_min.insert(ar[i].fi.fi);
    }
    for(auto it: contain) {
        cout << it << " ";
    }
    cout << "\n";
    for(auto it: be_contain) {
        cout << it << " ";
    }
}