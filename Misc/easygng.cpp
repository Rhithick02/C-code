//sort the array and print the diff of max and min sum with required condition
#include<bits/stdc++.h>
using namespace std;
void sort(int ar[],int start,int end)
{
    int mid=(start+end)/2;
    int i,j,k;
    i=start;
    j=mid+1;
    k=start;
    int temp[100];
    while(i<=mid && j<=end)
    {
        if(ar[i]<=ar[j])
            temp[k++]=ar[i++];
        else 
            temp[k++]=ar[j++];
    }
    while(i<=mid)
        temp[k++]=ar[i++];
    while(j<=end)
        temp[k++]=ar[j++];
    for(int i=start;i<=end;i++)
        ar[i]=temp[i];
}
void mergesort(int ar[],int start,int end)
{
    if(start>=end)
        return;
    int mid=(start+end)/2;
    mergesort(ar,start,mid);
    mergesort(ar,mid+1,end);
    sort(ar,start,end);
}
int main()
{
    int t,n,m,ar[1000],max,min;
    cin>>t;
    while(t--)
    {
        max=min=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        mergesort(ar,0,n-1);
        for(int i=m;i<n;i++)
            max+=ar[i];
        for(int i=0;i<n-m;i++)
            min+=ar[i];
        cout<<max-min<<endl;
    }
    return 0;
}