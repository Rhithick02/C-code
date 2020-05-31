#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,k,count=0,flag=0;
    cin>>n>>k;
    int temp=k-1;    
    vi ar(n),st;
    For(i,n) 
    {
        cin>>ar[i];
        if(ar[i]) st.push_back(i+1),temp=0;
        else temp++;        
        if(temp>2*(k-1)) flag=-1;
    }
    if(flag==-1 || temp>k-1) cout<<"-1";
    else
    {
        temp=1;
        For(i,st.size())
        {
            if(st[i]-temp<k) continue;
            temp=st[i-1]+k;
            count++;
        }
        cout<<count+1;
    }    
    return 0;
}