#include<bits/stdc++.h>
using namespace std;
int binsearch(int arr[],int p,int l,int h)
{
    if(p>arr[h] && l==0)
        return h;
    int mid=l+(h-l)/2;
    if(arr[mid]==p)
        return mid;
    else if(arr[mid]>p)
        binsearch(arr,p,l,mid-1);
    else
        binsearch(arr,p,mid+1,h);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    while(q--)
    {
        int p,sum=0,count=0;
        cin>>p;
        for(int i=0;i<=binsearch(arr,p,0,n-1);i++)
        {
            count++;
            sum+=arr[i];
        }
        cout<<count<<" "<<sum<<endl;
    }
    return 0;
}