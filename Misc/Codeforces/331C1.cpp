#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define fi first
#define se second

int main(){
    lli n,count=0;
    cin>>n;
    while(n)
    {
        lli temp=n,maxi=0;
        while(temp)
        {
            maxi=max(maxi,temp%10);
            temp/=10;
        }
        n-=maxi;
        count++;
    }
    cout<<count<<endl;
    return 0;
}