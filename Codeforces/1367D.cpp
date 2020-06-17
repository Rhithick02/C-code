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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m,n=s.length(),fl=25,mark=1;
        cin>>m;
        vector<char> ans(m);
        vi alp(26);
        vpa st,ar(m);
        For(i,0,m) cin>>ar[i].fi,ar[i].se=i;
        For(i,0,n) alp[s[i]-'a']++;
        while(!alp[fl]) fl--;
        sort(asc(ar));
        For(i,0,m) 
        {
            if(ar[i].fi) break;
            st.pb(ar[i]);
            ans[ar[i].se]='a'+fl;
            alp[fl]--,ar[i].fi=-1;
        }
        while(!alp[--fl]);
        while(mark)
        {
            vpa store;
            mark=0;
            For(j,0,m)
            {
                if(ar[j].fi==-1) continue;
                mark=1;
                int temp=0,r=st.size();
                For(k,0,r) temp+=abs(ar[j].se-st[k].se);
                if(temp==ar[j].fi) store.pb(ar[j]),ar[j].fi=-1;
            }
            if(store.size()>alp[fl]) while(alp[--fl]<store.size());
            for(auto it: store) ans[it.se]='a'+fl,st.pb(it);
            if(store.size()) fl--;
        }
        For(i,0,m) cout<<ans[i];
        cout<<endl;
    }
    return 0;
}