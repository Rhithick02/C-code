#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    lli sum=0;
    int n,k,i;
    cin>>n>>k;
    vi ar(n);
    set<int> st;
    vector< pair<int,int> > dif(n);
    For(i,n) cin>>ar[i];
    if(k==1) cout<<ar[n-1]-ar[0];
    else if(k==n) cout<<0;
    else
    {
        for(int i=1;i<n;i++)
        {
            dif[i].fi=ar[i]-ar[i-1];
            dif[i].se=i;
        }
        sort(asc(dif));
        for(int i=n-k+1;i<n;i++)
            st.insert(dif[i].se);
        int mini=ar[0];
        for(auto it:st)
        {
            sum+=ar[it-1]-mini;
            mini=ar[it];
        }
        if(*st.rbegin()!=n-1) sum+=ar[n-1]-mini;
        cout<<sum;
    }
    cout<<endl;
    return 0;
}