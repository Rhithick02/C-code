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

bool check(int h, int m, string time) {
    bool ok = true;
    reverse(asc(time));
    For(i, 0, 2) {
        if(time[i] != '0' && time[i] != '1' && time[i] != '2' && time[i] != '5' && time[i] != '8')
            ok = false;
        if(time[i] == '5') time[i] = '2';
        else if(time[i] == '2') time[i] = '5';
    }
    For(i, 3, 5) {
        if(time[i] != '0' && time[i] != '1' && time[i] != '2' && time[i] != '5' && time[i] != '8')
            ok = false;
        if(time[i] == '5') time[i] = '2';
        else if(time[i] == '2') time[i] = '5';
    }
    string s = "";
    For(i, 3, 5) s += time[i];
    int mini = stoi(s);
    s = "";
    For(i, 0, 2) s += time[i];
    int hou = stoi(s);
    if(mini >= m || hou >= h) ok = false;
    return ok;
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int h, m;
        string time;
        cin >> h >> m >> time;
        while(true) {
            if(check(h, m, time)) {
                cout << time << "\n";
                break;
            }
            string s = "";
            For(i, 3, 5) s += time[i];
            int mini = stoi(s);
            s = "";
            For(i, 0, 2) s += time[i];
            int hou = stoi(s);
            mini = (mini + 1) % m;
            if(!mini) hou = (hou + 1) % h;
            time = "";
            if(hou <= 9) time = '0';
            time += to_string(hou);
            time += ":";
            if(mini <= 9) time += '0';
            time += to_string(mini);
        }
    }
}