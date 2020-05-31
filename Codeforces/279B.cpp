#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,t,sum=0,k=0;
    cin>>n>>t;
    vector<int> ar(n);
    set<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        if(sum>t)
        {
            while(sum>t)
                sum-=ar[k++];
        }
        st.insert(i+1-k);        
    }
    cout<<*st.rbegin()<<endl;
    return 0;
}