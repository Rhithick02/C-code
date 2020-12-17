#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    int ar[n+1]={0},arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1,j=n;i<=n;i++)
    {
        ar[arr[i]]++;
        if(arr[i]==j)
        {
            for(;j>=1;)
            {
                if(ar[j]==0)
                {
                    cout<<endl;
                    break;
                }
                cout<<j<<" ";
                j--;
            }
        }
        else 
            cout<<endl;
    }
    return 0;
}