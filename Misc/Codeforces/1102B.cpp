#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
    int n,k,fl=0;
    cin>>n>>k;
    vi ar(n),te(5001),st(n);
    For(i,n) cin>>ar[i];
    For(i,n)
        st[i]=(te[ar[i]]+1>k? -1:++te[ar[i]]);
    int maxi=*max_element(asc(st));
    set<int> ta;
    For(i,n)
    {
        if(maxi>=k) break;
        if(ta.find(st[i])==ta.end()) ta.insert(st[i]);
        else st[i]=++maxi;
    }
    For(i,n) if(st[i]<0) fl=-1;
    if(fl==-1) cout<<"NO\n";
    else 
    {
        cout<<"YES\n";
        For(i,n) cout<<st[i]<<" ";
        cout<<endl;
    }
    return 0;
}