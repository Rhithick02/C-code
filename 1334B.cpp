#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        lli sum=0;
        int n,x,flag=-1;
        cin>>n>>x;
        vi ar(n);
        For(i,n) 
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sort(ar.begin(),ar.end());
        For(i,n) 
        {
            if(sum/(n-i)>=x)
            {
                flag=1;
                cout<<n-i;
                break;
            }
            else 
                sum-=ar[i];
        }
        if(flag!=1)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}