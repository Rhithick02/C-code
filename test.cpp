#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
	lli n,sum=0;
	cin>>n;
	vi ar(n),st(100001);
	For(i,n) cin>>ar[i],st[ar[i]]++;
	int maxi=*max_element(ar.begin(),ar.end());
	for(int i=maxi;i>0;i--)
	{
		lli temp1=0,temp2=0;
		while(st[i])
		{
			if(i&1) temp1+=i*st[i];
			else temp2+=i*st[i];
			i--;
		}
		sum+=max(temp1,temp2);
	}
	cout<<sum<<endl;
	return 0;
}