#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    lli cost=0,n,k;
    cin>>n>>k;
    vector<lli> ar(n);
    vector< pair<double,lli> > st;
    For(i,n)
    {
        cin>>ar[i];
        st.push_back(make_pair(ar[i]/pow(2,i),(lli)pow(2,i)));
    }
    sort(st.begin(),st.end());    
    lli temp=k;
    lli store=(st[0].first*st[0].second);
    cost+=(temp/st[0].second)*store;
    temp-=(temp/st[0].second)*st[0].second;    
    if(temp!=0)
    {
        lli bit=temp,count=0,sum=0;
        while(bit)
        {
            if(bit&1) sum+=ar[count];
            count++;
            bit=bit>>1;
        }            
        cost+=min(sum,store);
        
    }       
    cout<<cost<<endl;
    return 0;
}