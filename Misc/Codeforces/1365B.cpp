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
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,count=0;
        cin>>n;
        vpa ar(n);
        For(i,n) cin>>ar[i].fi;
        For(i,n) 
        {
            cin>>ar[i].se;
            if(ar[i].se) count++;
        }
        For(i,n-1)
            if(ar[i]>ar[i+1]) flag=-1;
        if(!flag) cout<<"YES";
        else if(count==0 || count==n) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}