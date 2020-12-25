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
        lli n,p,k,sum=0,temp=0;
        int cnt=0,ans=0;
        cin>>n>>p>>k;
        vi ar(n),dp(n);
        For(i,0,n) cin>>ar[i];
        sort(asc(ar));
        For(i,0,k){
            sum=temp;
            if(sum>p) break;
            cnt=i;
            for(int j=i+k-1;j<n;j+=k){
                if(sum+ar[j]>p) break;
                sum+=ar[j];
                cnt+=k;
            }
            ans=max(ans,cnt);
            temp+=ar[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}