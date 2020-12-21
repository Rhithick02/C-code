//INCOMPLETE
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
    int n,k,count=0;
    string s;
    cin>>n>>k;
    vi ar;
    cin>>s;
    For(i,n) if(s[i]=='1') ar.push_back(i+1);
    For(i,ar.size())
    {
        if(ar[i]-k-1<=0) continue;
        count+=ar[i-1];
        for(int j=ar[i-1]-2;j>=0 && j>ar[i-1]-2-k;j--) s[j]='*';
    }
    if(ar.size())
    {
        int ind=ar.size();
        for(int i=ar[ind-1]-2;i>=0 && i>ar[ind-1]-2-k;i--) 
            s[i]='*';
        for(int i=ar[ind-1];i<n && i<ar[ind-1]+k;i++) 
            s[i]='*';
        if(ind>=2 && (ar[ind-1]-ar[ind-2]>k || ar[ind-1]!=n)) count+=ar[ind-1];
        else if(ind==1) count+=ar[ind-1];
    }
    For(i,n) if(s[i]=='0') count+=i+1;
    cout<<count<<endl;
    return 0;
}