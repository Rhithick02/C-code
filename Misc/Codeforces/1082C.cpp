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
    int n, m, s, r, res;
    cin>>n>>m;
    vector<int> ar[m+1], st(n+1);
    For(i,0,n){
        cin>>s>>r;
        ar[s].pb(r);
    }
    For(i, 0, m){
        sort(des(ar[i+1]));
        int sum=0;
        For(j,0,ar[i+1].size()){
            if(sum + ar[i+1][j] >= 0){
				sum += ar[i+1][j];
				st[j+1] += sum;
			}
			else break;
        }
    }
	res = *max_element(asc(st));
    cout<<res<<"\n";
}