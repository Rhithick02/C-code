#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    vector<int> ar(n),temp;
    for(int i=0;i<n;i++)
        cin>>ar[i];   
    if(n!=1)
    {
        for(int i=1;i<n;i++)
        {
            if(ar[i]>ar[i-1])
                count++;
            if(ar[i]<=ar[i-1] || i==n-1)
            {
                temp.push_back(count);
                count=1;
            }        
        }
        sort(temp.begin(),temp.end(),greater<int>());
        cout<<temp[0];
    }
    else
    {
        cout<<"1 ";
    }
    
    return 0;
}