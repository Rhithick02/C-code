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
        vector<int> ar(n+1),pr(n+1);
        for(int i=1;i<=n;i++) 
            cin>>ar[i];
        for(int i=1;i<=n;i++)
        {
            if(pr[i]==0)
            {
                vector<int> te;
                int count=0;
                for(int j=i;j<=n;)
                {
                    te.push_back(j);
                    j=ar[j];                    
                    count++;
                    if(j==i) 
                        break;
                }
                for(int k=0;k<te.size();k++) pr[te[k]]=count;
            }
        }
        for(int i=1;i<=n;i++) cout<<pr[i]<<" ";
        cout<<endl;
    }
    return 0;
}