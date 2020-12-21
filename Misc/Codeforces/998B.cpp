#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,b,count=0,sum=0,flag=0;
    cin>>n>>b;
    int ar[n];
    vector<int> st;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n-2;i++)
    {
        if(ar[i]%2==1)
            count++;
        else 
            count--;
        if(count==0 && abs(ar[i]-ar[i+1])<=b)
            st.push_back(abs(ar[i]-ar[i+1]));
    }
    if(st.size()==0)
        cout<<"0";
    else 
    {
        sort(st.begin(),st.end());
        for(auto it: st)
        {
            sum+=it;
            if(sum>b)
            {
                sum=0;
                break;
            }
            flag++;        
        }
       cout<<flag;
    }
    return 0;
}