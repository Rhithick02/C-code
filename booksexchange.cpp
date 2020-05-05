#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ar(n+1);
        for(int i=1;i<=n;i++) 
            cin>>ar[i];
        for(int i=1;i<=n;i++)
        {
            int count=0;
            for(int j=i;j<=n;)
            {
                j=ar[j];
                count++;
                if(j==i) 
                    break;
            }
            cout<<count<<" ";            
        }
        cout<<endl;
    }
    return 0;
}