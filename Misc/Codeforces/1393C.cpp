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
        int n,x,maxi=0,cnt=0;
        map<int,int> mp;
        cin>>n;
        For(i,0,n){
            cin>>x,mp[x]++;
            maxi=max(maxi,mp[x]);
        }
        for(auto it:mp) if(it.se==maxi) cnt++;
        lli low=0,high=1e5,mid;
        while(low<=high){
            mid=low+high>>1;
            if(1LL*cnt+(maxi-1)*mid<=1LL*n) low=mid+1;
            else high=mid-1;
        }
        if(1LL*cnt+(maxi-1)*mid>1LL*n) mid--;
        if(1LL*cnt+(maxi-1)*(mid+1)<=1LL*n) mid++;
        cout<<mid-1<<"\n";
    }
}