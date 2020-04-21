#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        cin>>ar[i];
        /*if(n==k)
        cout<<"yes"<<endl;
        else*/
        //{
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=1)
            count++;
        }
        if(count<=k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;                       
        //}               
    }
    return 0;
}