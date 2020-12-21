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
    int n,k,lft=0,right=0;
    cin>>n>>k;
    vi ar(n);
    For(i,0,n) cin>>ar[i];
    For(i,0,n){
        if(ar[i]>k) break;
        lft++;
    }
    For(i,0,n){
        if(ar[n-1-i]>k) break;
        right++;
    }
    cout<<(lft+right>n? n:lft+right)<<"\n";
}