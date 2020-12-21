#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,l,big=0,first=0,last=0;
    cin>>n>>l;
    cout.precision(10);
    vector <int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(n==1)
        big=arr[0];
    else
    {
        big=arr[1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>big)
                big=arr[i]-arr[i-1];
        }
    }
    if(l!=arr[n-1] && big/2<l-arr[n-1])
        last=l-arr[n-1];
    if(arr[0]!=0 && big/2<arr[0])
        first=arr[0];
    if(first>=last && first>=big/2)
        cout<<fixed<<first;
    else if(first>=last && first<big/2)    
        cout<<fixed<<big/2;
    else
        cout<<fixed<<last;        
    return 0;
}