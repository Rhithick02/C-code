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

int main(){
    int t, ar[8005];
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        vector<bool> temp(n+1);
        set<int> te;
        For(i,n) cin>>ar[i];
        for(int i=0;i<n;i++){
            int sum=ar[i];
            for(int j=i+1;j<n;j++)sum+=ar[j], sum<=n? temp[sum]=true:1;
        }
        For(i,n) if(temp[ar[i]]) count++;
        cout<<count<<endl;
    }
    return 0;
}