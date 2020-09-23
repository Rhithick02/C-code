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
    int n,q;
    lli x;
    cin>>n>>q;
    deque<int> ar;
    vpa st;
    For(i,0,n) cin>>x,ar.pb(x);
    For(i,0,n-1){
        st.pb({ar[0],ar[1]});
        int te1=ar.front();
        ar.pop_front();
        int te2=ar.front();
        ar.pop_front();
        if(te1>te2) ar.pb(te2),ar.push_front(te1);
        else ar.pb(te1),ar.push_front(te2);
    }
    For(i,0,q){
        cin>>x;
        if(x<n) cout<<st[x-1].fi<<" "<<st[x-1].se<<endl;
        else cout<<ar[0]<<" "<<ar[(x-1)%(n-1)+1]<<endl;
    }   
    return 0;
}

