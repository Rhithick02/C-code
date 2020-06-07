#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
bool check(int x,int n, int c,vi ar)
{
    int cows=1,last=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]-last>=x)
        {
            cows++;
            if(cows==c) return true;
            last=ar[i];
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vi ar(n);
        For(i,n) cin>>ar[i];
        sort(asc(ar));
        int low=0,high=1e9,mid,ans=0;
        while(high>=low)
        {
            mid=(low+high)/2;
            if(check(mid,n,c,ar))
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}