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
    int m,index,small;
    cin>>m;
    int ar[m],ind[m];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
        ind[i]=ar[i];
    }
    mergesort(ind,0,m-1);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ind[i]==ar[j])
            {
                index=j;
                break;
            }
        }
        cout<<index<<" ";        
    }
    return 0;
}