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
        int n,mini=1e9,maxi=0;
        cin>>n;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        For(i,0,n)
        {
            if(ar[i]!=-1) continue;
            if(i!=n-1 && ar[i+1]!=-1) maxi=max(maxi,ar[i+1]),mini=min(mini,ar[i+1]);
            if(i && ar[i-1]!=-1) maxi=max(maxi,ar[i-1]),mini=min(mini,ar[i-1]);
        }
        int x=(maxi+mini)/2,diff=0;
        For(i,0,n-1)
        {
            if(ar[i]==-1) ar[i]=x;
            if(ar[i+1]==-1) ar[i+1]=x;
            diff=max(diff,abs(ar[i]-ar[i+1]));
        }
        cout<<diff<<" "<<x<<endl;
    }
    return 0;
}