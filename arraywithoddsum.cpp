#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,od=0;
        cin>>n;
        vector<int> ar(n);
        For(i,n)
        {
            cin>>ar[i];
            sum+=ar[i];
            if(ar[i]&1) od++;
        }
        if(sum&1)
            cout<<"YES";
        else if(od!=0 && od!=n)
            cout<<"YES";
        else 
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}