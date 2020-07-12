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
        int n;
        cin>>n;
        vi ar(n);
        vpa st;
        For(i,0,n) cin>>ar[i];
        st.pb({0,ar[0]});
        For(i,1,n){
            if(st.size()==1){
                if(ar[i]>st[0].se) st.pb({i,ar[i]});
                else st[0]={i,ar[i]};
            }
            else if(st.size()==2){
                if(ar[i]<st[1].se) st.pb({i,ar[i]});
                else st[1]={i,ar[i]};
            }
        }
        if(st.size()!=3) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(auto it:st) cout<<it.fi+1<<" ";
            cout<<"\n";
        }
    }
    return 0;
}