#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        vector<int> ar(n),st;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            sum+=ar[i];
            if(sum%2!=0 && k>1)
            {
                st.push_back(i+1);
                sum=0;
                k--;
            }
        }
        if(sum%2!=0 && k==1)
        {
            st.push_back(n);
            cout<<"YES\n";
            for(int i=0;i<st.size();i++)
                cout<<st[i]<<" ";cout<<endl;
        }
        else 
            cout<<"NO\n";        
    }
    return 0;
}