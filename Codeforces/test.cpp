#include<bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())

int n;
string s;

inline bool read() {
	if(!(cin >> n))
		return false;
	cin >> s;
	return true;
}

inline void solve() {
	string t(n, '0');
	
	int bal = 0;
	fore(i, 0, n) {
		if(s[i] == ')')
			bal--;
		
		t[i] = char('0' + (bal & 1));
		
		if(s[i] == '(')
			bal++;
	}
	
	cout << t << endl;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	
	if(read()) {
		solve();
		
#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
#endif
	}
	return 0;
}