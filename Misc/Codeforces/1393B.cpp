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
#define MAX 100001
vi ar(MAX);
multiset<int,greater<int>> st;
map<int,int> mp;
void update(int x){
    st.insert(mp[x]);
    auto it=st.find(mp[x]-1);
    if(it!=st.end()) st.erase(it);
}
int main(){
    ios::sync_with_stdio(false);
    char ch;
    int n,q,num;
    cin>>n;
    For(i,0,n){
        cin>>ar[i],mp[ar[i]]++;
        update(ar[i]);
    }
    cin>>q;
    For(i,0,q){
        cin>>ch>>num;
        auto it=st.find(mp[num]);
        if(it!=st.end()) st.erase(it);
        if(ch=='+') st.insert(++mp[num]);
        else st.insert(--mp[num]);
        int fl=0,cnt=0;
        vi te;
        for(auto it: st){
            if(cnt++==3) break;
            te.pb(it);
        }
        if(te[0]>=8) fl=1;
        else if(te.size()>=2 && te[0]>=6 && te[1]>=2) fl=1;
        else if(te.size()>=2 && te[0]>=4 && te[1]>=4) fl=1;
        else if(te.size()>=3 && te[0]>=4 && te[1]>=2 && te[2]>=2) fl=1;
        if(fl) cout<<"YES\n";
        else cout<<"NO\n";
    }
}