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
    int n,q;
    cin>>n;
    vi ar(n),pref(n);
    For(i,n) 
    {
        cin>>ar[i];
        if(i>0) pref[i]=ar[i]+pref[i-1];
        else pref[0]=ar[i];
    }
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sum=pref[r-1]-pref[l-1]+ar[l-1];
        cout<<sum/10<<endl;
    }
    return 0;
}