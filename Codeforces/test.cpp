#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
const int SET='S'+'E'+'T';
string s[N];
map<string,int>mp;
int n,k,ans;
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) cin>>s[i],mp[s[i]]++;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			string t="";
			for(int p=0;p<k;p++)
			{
				if(s[i][p]==s[j][p])  t+=s[i][p];
				else t+=SET-s[i][p]-s[j][p];
			}
			if(mp.count(t))  ans+=mp[t];
		}
	}
	cout<<ans<<endl;
}
  	 	 	  	 					 				 				 	 	