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

class stre {
    deque<pair<int, int>> q;
    int cnt_added, cnt_removed;

    public:
    stre() : cnt_added(0), cnt_removed(0) {}
    int minimum() {
        return q.front().first;
    }
    void add(int new_element) {
        while (!q.empty() && q.back().first > new_element)
            q.pop_back();
        q.push_back({new_element, cnt_added});
        cnt_added++;
    }
    void remove() {
        if (!q.empty() && q.front().second == cnt_removed) 
            q.pop_front();
        cnt_removed++;
    }
};

int main(){
    ios::sync_with_stdio(false);
    int n, k, tr = 0, cnt = 0;
    cin >> n >> k;
    lli mini = 2e9, maxi = -2e9;
    vector <lli> ar(n), a(n - k + 1), b(n - k + 1);
    stre qs, qb;
    For(i, 0, n) {
        cin >> ar[i];
        qs.add(ar[i]);
        qb.add(-ar[i]);
        if(cnt < k) cnt++;
        if(cnt == k) {
            a[tr] = -qb.minimum();
            b[tr] = qs.minimum();
            mini = min(mini, a[tr] + b[tr]);
            maxi = max(maxi, a[tr] + b[tr]);
            cnt--, tr++;
            qb.remove();
            qs.remove();
        }
    }
    cout << maxi + (mini > 0 ? mini : 0) << endl;
}