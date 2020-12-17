#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
    lli n,count=0,temp=0,k=0;
    cin>>n;
    lli ar[n],store[n];
    For(i,n) cin>>ar[i];
    For(i,n)
    {
        if(ar[i]<0) 
        {
            store[k++]=temp;
            count+=temp*(temp+1)/2;
            temp=0;
            continue;
        }
        temp++;
    }
    store[k++]=temp;
    count+=temp*(temp+1)/2;
    int pref1=0,pref2=0;
    for(int i=0;i<k-2;i+=2) pref1+=store[i+2]+1;
    for(int i=1;i<k-2;i+=2) pref2+=store[i+2]+1;
    for(int i=0;i<k-2;i+=2)
    {
        count+=(store[i]+1)*pref1;
        pref1-=store[i+2]+1;
    }
    for(int i=1;i<k-2;i+=2)
    {
        count+=(store[i]+1)*pref2;
        pref2-=store[i+2]+1;
    }
    cout<<n*(n+1)/2-count<<" "<<count<<" ";
    return 0;
}