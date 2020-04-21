#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar.begin(),ar.end(), greater <int>());
    if(ar[0]==ar[1])
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]=ar[i+1]) 
            count++;
        }
        cout<<ar[1+count]%ar[count];
    }
    else
    {
        cout<<ar[1]%ar[0];
    }   
    return 0;
}