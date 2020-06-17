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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) 
        {
            cout<<0<<endl;
            continue;
        }
        if(a>b) swap(a,b);
        lli low=1,high=1e5,mid;
        while(low<=high)
        {
            mid=low+high>>1;
            if(mid*(mid+1)>=2*(b-a)) high=mid-1;
            else low=mid+1;
        }
        if(mid*(mid+1)>2*(b-a)) mid--;
        if(mid*(mid+1)<2*(b-a)) mid++;
        if((a+mid*(mid+1)/2-b)%2==0) cout<<mid;
        else if(((a+mid*(mid+1)/2-b)&1) && ((b-a+mid*(mid-1)/2)&1)) cout<<mid+1;
        else cout<<mid+2;
        cout<<endl;
    }
    return 0; 
}