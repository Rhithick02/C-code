#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i])
            count++;
    }
    
    int ans = -1;
    for(int i=0;i<n;i++)
        for(int j=i; j<n;j++)
        {
            int temp=0;
            for(int k=i;k<=j;k++)
                if(ar[k])
                    temp--;
                else
                    temp++;
            ans = max(ans, temp);
        }
    cout<<ans+count<<endl;
    return 0;
}