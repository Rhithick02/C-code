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
#define lim min(k,(int)st.size())
int main(){
    ios::sync_with_stdio(false);
    int n,k,cnt=0;
    cin>>n>>k;
    vpa st(n);
    vi ar(n),test(n+1);
    vector<bool> check(n);
    For(i,0,n){
        cin>>ar[i];
        st[i]={ar[i],i};
        test[i+1]=round((100.0*(i+1))/n);
    }
    For(i,1,n){
        vpa temp;
        pa te=*min_element(st.begin(),st.begin()+lim);
        For(j,0,lim) 
            st[j].fi-=te.fi;
        For(j,0,lim) if(!st[j].fi) st.erase(st.begin()+j);
        For(j,0,lim){
            int xy=test[n-st.size()]-(ar[st[j].se]-st[j].fi);
            if(xy<=0) continue;
            temp.pb({xy,st[j].se});
        }
        for(auto it: temp){
            int fl=1;
            For(j,0,lim) if(st[j].fi-it.fi<0) fl=0;
            if(fl) check[it.se]=true;
        }
    }
    For(i,0,n) if(check[i]) cnt++;
    cout<<cnt<<"\n";
}