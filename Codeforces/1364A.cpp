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
        lli sum=0;
        int n,x,start=0,end=0;
        cin>>n>>x;
        vi ar(n);
        For(i,0,n) cin>>ar[i],sum+=ar[i];
        if(sum%x!=0) 
        {
            cout<<n<<endl;
            continue;
        }
        For(i,0,n) 
        {
            if(ar[i]%x==0) start++;
            else break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(ar[i]%x==0) end++;
            else break;
        }
        cout<<n-min(start+1,end+1)<<endl;
    }
}