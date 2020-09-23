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
string s;
int find_num(int l, int r) {
    int num = 0;
    For(i, l, r)
        num = 10 * num + (s[i] - '0');
    return num;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        int fnum = 0, lalp = 0, n = s.length();
        For(i, 0, n) {
            if(s[i] >= '1' && s[i] <= '9' && !fnum)
                fnum = i;
            else if(s[i] >= 'A' && s[i] <= 'Z')
                lalp = i;
        }
        if(lalp > fnum) {
            int num = find_num(lalp + 1, n);
            string te = "";
            while(num) {
                te += (num + 25) % 26 + 'A';
                num = (num - 1) / 26;
            }
            reverse(asc(te));
            num = find_num(fnum, lalp);
            cout << te << num << "\n";
            continue;
        }
        string te = "R";
        int num = find_num(fnum, n);
        te += to_string(num), te += 'C';
        num = 0;
        string st = s.substr(0, fnum);
        For(i, 0, fnum)
            num += (int)pow(26, fnum - i - 1) * (s[i] - 'A' + 1);
        cout << te << num << "\n";
    }
}