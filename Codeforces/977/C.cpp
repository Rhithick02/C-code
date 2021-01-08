#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0,x;
    cin>>n>>k;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++)
    {
        count++;
        if(k==0 && ar[i]>1)
        {
            cout<<count;
            break;
        }
        else if(count==k && ar[i]!=ar[i+1])
        {
            cout<<ar[i];
            break;
        }
        else if(count>k)
        {
            cout<<"-1";
            break;
        }
        
    }
    return 0;
}