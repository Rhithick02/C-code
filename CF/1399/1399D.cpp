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

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,cnt=1;
        string s;
        cin>>n>>s;
        vi res(n);
        set<int> te[2];
        For(i,0,n) te[(s[i]=='0'?0:1)].insert(i);
        For(i,0,n){
            if(res[i]) continue;
            int cur=s[i]-'0',pos=i-1;
            while(te[cur].size() && *te[cur].rbegin()>pos){
                pos=*te[cur].lower_bound(pos);
                te[cur].erase(pos);
                res[pos]=cnt;
                cur^=1;
            }
            cnt++;
        }
        cout<<cnt-1<<"\n";
        for(auto it: res) cout<<it<<" ";
        cout<<"\n";
    }
}