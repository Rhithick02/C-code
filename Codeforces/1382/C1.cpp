#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

void transform(string &a,int n,int tot){
    string te = "";
    For(i, 0, n) te += (a[i]=='0'?'1':'0');
    reverse(asc(te));
    For(i, n, tot) te += a[i];
    a = te;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        vi ans;
        string a,b;
        cin >> n >> a >> b;
        if(a == b){
            cout << 0 << "\n";
            continue;
        }
        For(i, 0, n){
            if(b[i] != a[n-1-i]) continue;
            if(b[i] != a[0]) ans.pb(1), a[0]=b[i];
            ans.pb(n-i);
            transform(a,n-i,n);
        }
        ans.pb(n);
        cout << ans.size() << " ";
        for(auto it: ans) cout << it << " ";
        cout << "\n";
    }
    return 0;
}