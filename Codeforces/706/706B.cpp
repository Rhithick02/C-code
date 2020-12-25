#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,count=1;
    cin>>n;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];        
    cin>>q;
    vector<int> arr(q);
    for(int i=0;i<q;i++)
        cin>>arr[i];

    sort(ar.begin(),ar.end());
    for(int i=0;i<q;i++)
    {
        auto lower=upper_bound(ar.begin(),ar.end(),arr[i])-ar.begin();
        cout<<lower<<endl;
    }
    return 0;
}