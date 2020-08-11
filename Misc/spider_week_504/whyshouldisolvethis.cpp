#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,d,q;
    cin>>n>>d;
    vector<int> ar(n),ans;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int l,r;
    cin>>q;
    for(int w=0;w<q;w++)
    {
        cin>>l>>r;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(i==l-1)
                i=r;
            for(int j=i+1;j<n;j++)
            {
                if(j==l-1)
                    j=r-1;
                else if(abs(ar[i]-ar[j])<=d)
                    count++;
            }
        }
        ans.push_back(count);
    }
    for(auto v : ans)
        cout<<v<<endl;
    return 0;
}