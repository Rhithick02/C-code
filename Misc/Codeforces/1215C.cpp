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
    int n;
    string s[2];
    vpa te;
    vector<pair<char,int>> st;
    cin>>n>>s[0]>>s[1];
    For(i,0,n){
        if(s[0][i]!=s[1][i]) (s[0][i]=='a'? st.pb({'b',i}):st.pb({'a',i}));
    }
    if(st.size()&1){
        cout<<-1<<endl;
        exit(0);
    }
    sort(asc(st));
    For(i,0,st.size()){
        if(st[i].fi!=st[i+1].fi){
            te.pb({st[i].se+1,st[i].se+1});
        }
        te.pb({st[i].se+1,st[i+1].se+1});
        i++;
    }
    cout<<te.size()<<endl;
    for(auto it:te) cout<<it.fi<<" "<<it.se<<endl;
    return 0;
}