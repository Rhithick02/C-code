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
    int n,temp=1e6,flag=0;
    cin>>n;
    vi ar(n),te(n,-1);
    For(i,0,n) cin>>ar[i];
    For(i,2,n)
    {
        if(ar[i]<=2 || ar[i]-ar[i-1]==1) continue;
        int count=ar[i]-2;
        for(int j=i-1;count>0 && j>flag;j--) ar[j]=count--;
        flag=i;
    }
    te[0]=(ar[0]==0? temp--:0);
    For(i,1,n)
    {
        if(ar[i]==ar[i-1]) 
        {
            te[i]=temp--;
            continue;
        }
        else te[i]=ar[i]-1;
    }
    for(auto it: te) cout<<it<<" ";
    cout<<endl;
    return 0;
}