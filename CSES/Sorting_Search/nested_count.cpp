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
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
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
    for(int i = 0; i < n; i++) {
        cin >> ar[i].fi.fi >> ar[i].fi.se;
        ar[i].se = i;
    }
    vector <int> contains(n);
    indexed_set te;
    sort(ar.begin(), ar.end(), comp);
    for(int i = n-1; i >= 0; i--) {
        if(i == n-1) {
            contains[ar[i].se] = 0;
        } else {
            contains[ar[i].se] = te.order_of_key({ar[i].fi.se, mod});
        }
        te.insert({ar[i].fi.se, ar[i].se});
    }
    sort(ar.begin(), ar.end(), comp2);
    vector <int> be_contained(n);
    te.clear();
    for(int i = n-1; i >= 0; i--) {
        if(i == n-1) {
            be_contained[ar[i].se] = 0;
        } else {
            be_contained[ar[i].se] = te.order_of_key({ar[i].fi.fi, mod});
        }
        te.insert({ar[i].fi.fi, ar[i].se});
    }
    for(auto it: contains) {
        cout << it << " ";
    }
    cout << "\n";
    for(auto it: be_contained) {
        cout << it << " ";
    }
}