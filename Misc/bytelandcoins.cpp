#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,ar[10000001];
    ar[0]=0;
    ar[1]=1;
    ar[2]=2;
    ar[3]=3;
    ar[4]=4;
    for(int i=5;i<1e7+1;i++)
    {   
        k=ar[i/2]+ar[i/3]+ar[i/4];
        k>i?ar[i]=k:ar[i]=i;
    }
    while(scanf("%Ld",&n)!=EOF)
    {
        cout<<ar[n]<<endl;
    }
    return 0;
}