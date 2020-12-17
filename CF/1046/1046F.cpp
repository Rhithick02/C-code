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
    lli n,x,f,count=0;
    cin>>n;
    vi ar(n);
    For(i,n) cin>>ar[i];
    cin>>x>>f;
    For(i,n)
    {
        if(ar[i]>x) 
            count+=ceil((1.0*(ar[i]-x))/(x+f));
    }        
    cout<<f*count<<endl;
    return 0;
}