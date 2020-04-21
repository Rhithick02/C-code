#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,s1=0,s2=0,s3=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    s1=1;
    if(ar[n-1]!=0)
    {
        s2=1;
        s3=n-s1-s2;
    }
    else if(ar[n-1]==0)
    {
        s2=2;
        s3=n-s1-s2;
    }   
    cout<<s1<<" "<<ar[0]<<endl;    
    cout<<s2<<" ";
    if(s2==1)
        cout<<ar[n-1];
    else 
        cout<<ar[1]<<" "<<ar[2];
    cout<<endl<<s3<<" ";
    if(ar[n-1]==0)
    {
        for(int i=3;i<n;i++)
            cout<<ar[i]<<" ";
    }
    else 
    {
        for(int i=1;i<n-1;i++)
        cout<<ar[i]<<" ";
    }
    return 0;
}