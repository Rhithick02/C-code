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
    int n,count=1,prev=0,maxi=0;
    cin>>n;
    vi ar(n);
    For(i,0,n) cin>>ar[i];
    For(i,0,n-1)
    {
        if(ar[i]<ar[i+1]) count++;
        else 
        {
            if(i<2 || ((ar[i+1]>ar[i-1]) || (i<n-2 && ar[i]<ar[i+2]))) maxi=max(maxi,count+prev),prev=count-1;
            else maxi=max(maxi,count),prev=0;
            count=1;
        }
        maxi=max(maxi,prev+count);
    }
    cout<<maxi<<endl;
    return 0;
}