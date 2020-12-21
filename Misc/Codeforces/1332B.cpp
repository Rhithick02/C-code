#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n],prime[11]={2,3,5,7,11,13,17,19,23,29,31},arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            arr[i]=-1;
        }
        int count=1;
        for(int i=0;i<11;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]!=-1)
                    continue;
                if(ar[j]%prime[i])
                    continue;
                arr[j]=count;
                flag=-1;
            }
            if(flag==-1)
                count++;
        }
        cout<<count-1<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}