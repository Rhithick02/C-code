#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,p,flag=-1;
    cin>>n>>p;
    int k=1;
    do
    {
        int store=n-k*p,count=0;
        if(store<=0) break;
        while(store)
        {        
            if(store&1) count++;
            store=store>>1;
        }
        if(count==k || (count<k && n-k*p>=k))
        {
            flag=0;
            cout<<k;
            break;
        }
    }while(k++);
    if(flag!=0)
        cout<<"-1";
    cout<<endl;
    return 0;
}