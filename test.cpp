#include <bits/stdc++.h> 
using namespace std; 
bool checkpossible(long long mask, long long* arr, long long* prefix, long long n,long long k) 
{ 
	bool dp[n + 1][k + 1]; 
	memset(dp, 0, sizeof(dp)); 
	dp[0][0] = 1;  
	for (long long i = 1; i <= n; i++)
		for (long long j = 1; j <= k; j++)
			for (long long l = i - 1; l >= 0; --l)
				if (dp[l][j - 1] && (((prefix[i] - prefix[l]) & mask) == mask))
				{
                    dp[i][j] = 1; 
					break; 
				} 
	return dp[n][k]; 
} 
long long Partition(long long arr[], long long n, long long k) 
{
	long long prefix[n+1]; 
	for (long long i = 1; i <= n; i++) prefix[i]=prefix[i-1] + arr[i]; 
	long long LOGS = 20; 
	long long ans = 0; 
	for (long long i = LOGS; i >= 0; --i)
		if (checkpossible(ans | (1 << i), arr, prefix, n, k))  
			ans = ans | (1 << i); 
	 
	return ans; 
}  
int main() 
{ 
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(long long i=0;i<n;i++) cin>>arr[i];
	cout<<Partition(arr, n, k); 
	return 0; 
} 
