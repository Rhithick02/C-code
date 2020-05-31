#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,flag=0;
        cin>>n;
        vi ar(n);
        set<int> p1,p2,p3,p4;
        For(i,n) cin>>ar[i];
        int maxi=*max_element(ar.begin(),ar.end());
        for(int i=0;i<maxi;i++) p1.insert(ar[i]);
        if(p1.size()==maxi && *p1.rbegin()==maxi)
        {
            for(int i=maxi;i<n;i++) p2.insert(ar[i]);
            if(p2.size()==n-maxi && *p2.rbegin()==n-maxi) count++,flag=1;
        }        
        for(int i=n-1;i>=n-maxi;i--) p3.insert(ar[i]);
        if(p3.size()==maxi && *p3.rbegin()==maxi)
        {
            for(int i=0;i<n-maxi;i++) p4.insert(ar[i]);
            if(p4.size()==n-maxi && *p4.rbegin()==n-maxi) count++;
        }
        if(!count || 2*maxi<n) cout<<"0";
        else if(count==2)
        {
            if(p1.size()==n-p1.size()) cout<<"1\n"<<p1.size()<<" "<<p2.size();
            else cout<<"2\n"<<p1.size()<<" "<<n-p1.size()<<endl<<n-p1.size()<<" "<<p1.size();
        }
        else
        {
            cout<<"1\n";
            if(!flag) cout<<n-p3.size()<<" "<<p3.size();
            else cout<<p1.size()<<" "<<n-p1.size();
        }
        cout<<endl;
    }
    return 0;
}