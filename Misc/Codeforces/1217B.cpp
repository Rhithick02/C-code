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
#define INF 1e10

lli bsearch(lli a,lli h,lli x,lli maxi){
    lli low=1,high=INF,mid;
    while(low<=high){
        mid=low+high>>1;
        if(maxi+mid*(a-h)>=x) high=mid-1;
        else low=mid+1;
    }
    while((maxi+mid*(a-h)<x)) mid++;
    while((maxi+(mid-1)*(a-h)>=x)) mid--;
    return mid+1;
}

int main(){
    ios::sync_with_stdio(false);
    int t,n,fl;
    cin>>t;
    while(t--){
        lli val=INF,x,maxi=0;
        fl=0;
        cin>>n>>x;
        vil a(n),h(n);
        For(i,0,n) cin>>a[i]>>h[i],maxi=max(maxi,a[i]);
        For(i,0,n){
            if(a[i]>=x) val=1,fl=1;
            if(h[i]>=a[i] || fl) continue;
            val=min(val,bsearch(a[i],h[i],x,maxi));
            if(val==1) fl=1;
        }
        cout<<(val==INF? -1:val)<<"\n";
    }
    return 0;
}