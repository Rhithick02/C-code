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
        int n,k,count=0,res=0;
        cin>>n>>k;
        vi st;
        string s;
        cin>>s;
        For(i,0,n) if(s[i]=='1') st.pb(i+1);
        if(!st.size()) goto a;
        For(i,0,st.size()-1)
        {
            count=st[i+1]-st[i]-1-2*k;
            if(count<=0) continue;
            res+=(count-1)/(k+1)+1;
        }
        count=st[0]-1-k;
        if(count>0) res+=(count-1)/(k+1)+1;
        count=n-st[st.size()-1]-k;
        if(count>0) res+=(count-1)/(k+1)+1;
        else a:res=(n-1)/(k+1)+1;
        cout<<res<<endl;
    }
    return 0;
}