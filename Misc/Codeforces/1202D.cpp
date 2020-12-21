#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        lli n,low = 0,high = 1e5,mid = 0;
        cin>>n;
        while(high-low>=1)
        {
            mid = (low+high)/2;
            if((mid*(mid-1))/2>n) high = mid-1;
            else if((mid*(mid-1))/2<n) low = mid+1;
            else break;
        }
        mid = low+high>>1;
        if(mid*(mid-1)/2>n) mid--;
        else if((mid+1)*(mid)/2<n) mid++;
        cout<<1;
        For(i,mid-2) cout<<3;
        For(i,n-(mid*(mid-1))/2) cout<<1;
        cout<<337;  
        cout<<endl;
    }
    return 0;
}