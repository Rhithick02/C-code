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
#define mod 1000000007

lli fast(lli x,lli y){
    if(!y) return 1;
    else if(y==1) return x%mod;
    else if(y&1) return x*fast(x,y-1)%mod;
    else return fast(x*x%mod,y/2)%mod;
}


int main(){
	ios::sync_with_stdio(false);
	cout<<fast(1000000007,1);
	return 0;
}