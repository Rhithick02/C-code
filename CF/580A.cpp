#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1;
    cin>>n;
    vector <int> ar(n),count;
    for(auto i=0;i<n;i++)
        cin>>ar[i];
    if(n!=1)
    {
        for(auto i=1;i<n;i++)
        {
            if(ar[i]>=ar[i-1])
                flag++;
            if(i==n-1 || ar[i]<ar[i-1])
            {
                count.push_back(flag);
                flag=1;
            }
        }
        cout<<*max_element(count.begin(),count.end());
    }
    else 
        cout<<flag;
    return 0;
}