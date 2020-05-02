#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){	
	bool ar[1001];
	ar[0]=0,ar[1]=1,ar[2]=1;
	int n,k;
	cin>>n>>k;
    for(int i=3;i<=1000;i++)
	{
		if(i<k)
		{
            if(!ar[i-1] || !ar[i-2])
                ar[i]=1;
            else 
                ar[i]=0;
        }
        else 
        {
            if(!ar[i-1] || !ar[i-2] || !ar[i-k])
                ar[i]=1;
            else 
                ar[i]=0;
        }
    }
	for(int i=0;i<=30;i++)
		cout<<ar[i]<<" ";
	return 0;
}