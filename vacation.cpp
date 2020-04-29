#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,count=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
            count++;
        else if(i>0 && ar[i]==ar[i-1] && ar[i]!=3)
            count++;
        else if(i>0 && ar[i]==3)
        {
            if(ar[i-1]==2)
                ar[i]=1;
            else if(ar[i-1]==1)
                ar[i]=2;
        }
    }
    cout<<count<<endl;
    return 0;
}