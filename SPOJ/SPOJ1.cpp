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
#define mod 1000000001

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        vector<bool> ar(n-m+1);
        for(int i=2;i<=sqrt(n);i++)
        {
            int te=m+i-m%i;
            for(int j=(te==i? te+i: te);j<=n;j+=i)
            {
                if(ar[j-m]) continue;
                ar[j-m]=true;
            }
        }
        int flag=0;
        for(int i=2;i<=sqrt(m);i++)
            if(m%i==0) 
            {
                flag=-1;
                break;
            }
        if(!flag && m!=1) cout<<m<<endl;
        For(i,n-m)
            if(!ar[i+1]) cout<<i+m+1<<endl;
        cout<<endl;
    }
    return 0;
}