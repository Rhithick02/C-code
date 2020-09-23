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
        int n,count=0,flag=1;
        cin>>n;
        vi ar(n);
        For(i,n) cin>>ar[i];
        sort(ar.begin(),ar.end());
        For(i,n)
        {
            if(flag==ar[i]) count++,flag=0;
            flag++;
        }
        cout<<count<<endl;
    }
    return 0;
}