#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 1000000000
int main(){
    lli n,money,temp,count=0,z=0;
    vector<lli> st;
    cin>>n>>money;
    set<int> ar;
    set<int>:: iterator itr;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ar.insert(temp);
    }
    itr=ar.begin();
    for(int i=1;i<=mod;i++)
    {
        if(i==*itr && i<=1000000)
            itr++;
        else if(money>=i)
        {
            money-=i;
            count++;
            st.push_back(i);
        }        
        else
            break;
    }
    cout<<count<<endl;
    for(auto it:st)
        cout<<it<<" ";
    return 0;
}