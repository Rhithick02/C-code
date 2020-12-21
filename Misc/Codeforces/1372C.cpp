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
        int n,fl=0;
        cin>>n;
        vi ar(n+1),st;
        For(i,0,n){
            cin>>ar[i];
            if(ar[i]!=i+1) st.pb(i);
        }
        if(!st.size()){
            cout<<0<<"\n";
            continue;
        }
        For(i,1,st.size()){
            if(st[i]-st[i-1]<=1) continue;
            fl=1;
            break;
        }
        if(!fl) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    return 0;
}