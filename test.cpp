#include<bits/stdc++.h>
using namespace std;
int pickingNumbers(vector<int> ar) 
{
    set<int> st,store;
    int arr[100]={0};
    for(int i=0;i<ar.size();i++)
        st.insert(ar[i]);
    for(int i:st)
    {
        arr[i]=count(ar.begin(),ar.end(),i);
    }
    for(int i=1;i<100;i++)
    {
        store.insert(arr[i]+arr[i-1]);
    }
    return *store.rbegin();
}
int main()
{
    int n;
    cin>>n;    
    vector<int>ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<pickingNumbers(ar);
    return 0;
}