// Next smallest palindrome
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
    int n;
    bool is_9 = true;
    cin >> n;
    vector <int> ar(n);
    for(auto &it: ar) {
        cin >> it;
        if(it != 9) is_9 = false;
    }
    if(is_9) {
        cout << "1";
        for(auto it: ar) cout << it;
        cout << "1\n";
    } else {
        int i = 0, j = n-1;
        while(i < j) {
            int c = 0;
            if(ar[i] >= ar[j]) {
                ar[j] = ar[i];
            } else {
                c = 1;
                ar[j] = ar[i];
                int temp = j-1;
                while(c && temp >= i) {
                    int sum = ar[temp] + c;
                    ar[temp] = sum % 10;
                    c = sum / 10;
                    temp--;
                }
                if(ar[j] != ar[i]) ar[j] = ar[i];
            }
            i++, j--;
        }
    }
    for(auto it: ar) cout << it << " ";
}