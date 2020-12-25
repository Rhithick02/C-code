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
        lli a,b,n,i=1,count=0;
        cin>>a>>b>>n;
        vi ar(200000);
        if(a>b) swap(a,b);
        ar[0]=a,ar[1]=b;
        while(ar[i]<=n) ar[i+1]=ar[i]+ar[i-1],i++,count++;
        cout<<count<<endl;
    }
    return 0;
}