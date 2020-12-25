#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,sum=1000000000;
    cin>>n;
    vi ar(n);
    set<int> v1,v2,v3,v4,v5,v6,v7;
    string s;
    For(i,n)
    {
        cin>>ar[i]>>s;
        if(s=="A") v1.insert(ar[i]);
        else if(s=="B") v2.insert(ar[i]);
        else if(s=="C") v3.insert(ar[i]);
        else if(s.length()==3) v4.insert(ar[i]);
        else if(s=="AB" || s=="BA") v5.insert(ar[i]);
        else if(s=="AC" || s=="CA") v6.insert(ar[i]);
        else  v7.insert(ar[i]);
    }
    if(v4.size()!=0 || (v1.size()!=0 && v7.size()!=0) || (v2.size()!=0 && v6.size()!=0) || (v3.size()!=0 && v5.size()!=0) || (v1.size()!=0 && v2.size()!=0 && v3.size()!=0) || (v5.size()!=0 && v7.size()!=0) || (v6.size()!=0 && v7.size()!=0) || (v5.size()!=0 && v6.size()!=0))
    {
        if(v4.size()!=0) sum=min(sum,*v4.begin());
        if(v1.size()!=0 && v7.size()!=0) sum=min(sum,*v1.begin()+*v7.begin());
        if(v2.size()!=0 && v6.size()!=0) sum=min(sum,*v2.begin()+*v6.begin());
        if(v3.size()!=0 && v5.size()!=0) sum=min(sum,*v3.begin()+*v5.begin());        
        if(v5.size()!=0 && v6.size()!=0) sum=min(sum,*v6.begin()+*v5.begin());
        if(v5.size()!=0 && v7.size()!=0) sum=min(sum,*v7.begin()+*v5.begin());
        if(v7.size()!=0 && v6.size()!=0) sum=min(sum,*v7.begin()+*v6.begin());
        if(v1.size()!=0 && v2.size()!=0 && v3.size()!=0) sum=min(sum,*v3.begin()+*v2.begin()+*v1.begin());
        cout<<sum;
    }
    else 
        cout<<"-1";
    cout<<endl;
    return 0;
}