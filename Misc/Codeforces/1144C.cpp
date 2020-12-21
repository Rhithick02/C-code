#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,max,flag=0;
    cin>>n;
    vi ar(n);
    set<int> se1,se2;
    For(i,n) cin>>ar[i];
    max=*max_element(ar.begin(),ar.end())+1;
    vi st(max);
    For(i,n)
        st[ar[i]]++;    
    For(i,max)
    {
        if(st[i]==2)
        {
            se1.insert(i);
            se2.insert(i);
        }
        else if(st[i]==1)
            se2.insert(i);
        else if(st[i]>2)
        {
            flag=-1;
            break;
        }
    }
    if(flag!=-1)
    {
        cout<<"YES\n";
        cout<<se1.size()<<endl;
        for(auto it: se1)
            cout<<it<<" ";
        cout<<endl;
        cout<<se2.size()<<endl;
        for(auto it=se2.rbegin();it!=se2.rend();it++)
            cout<<*it<<" ";
    }
    else 
        cout<<"NO\n";
    return 0;
}