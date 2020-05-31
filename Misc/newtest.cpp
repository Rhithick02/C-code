#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second
lli value(int k,int n,vector<lli> ar)
{
	if(k<=0) return 0;
	lli cost=1e18;
	int x=log2(k);
	for(int i=n-1;i>x;i--)
		cost=min(cost,ar[i]);
	return min(cost,ar[min(n-1,x)]+value(k-(1<<min(n-1,x)),n,ar));
}
int main(){
	int n,k;
	lli mini=1e18;
	cin>>n>>k;
	vector<lli> ar(n);
	For(i,n) cin>>ar[i],mini=min(mini,ar[i]/(1<<i));
	if(mini==ar[0]) cout<<k*ar[0];
	else
	{
		for(int i=1;i<n;i++)
		ar[i]=min(ar[i], 2*ar[i-1]);
		cout<<value(k,n,ar);
	}
	return 0;
}