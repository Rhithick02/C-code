#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,q;
    cin>>n;
    vector<int>ar(n),perm(25);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cin>>q;
    int l,r,z=0,temp;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        for(int j=0;j<25;j++)
            cin>>perm[j];
        for(int j=0,z=l-1;j<25;j++)
            for(int k=l-1;k<r;k++)
            {
                if(perm[j]==ar[k])
                {
                    ar[k]=ar[z];
                    ar[z++]=perm[j];
                }
            }
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}