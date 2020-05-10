#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    set<int> se;
    For(i,n) cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            lli sum=0;
            vector<int> st1,st2;
            for(int l=0;l<i;l++)
                st2.push_back(ar[l]);
            for(int l=j+1;l<n;l++)
                st2.push_back(ar[l]);
            for(int l=i;l<=j;l++)
            {
                st1.push_back(ar[l]);
                sum+=ar[l];
            }
            sort(st1.begin(),st1.end());
            sort(st2.begin(),st2.end(),greater<int>());
            for(int z=0,m=0,n=0;z<k && z<min(st1.size(),st2.size());z++)
            {
                if(st1[m]<st2[n])
                    sum+=st2[n++]-st1[m++];
            }
            se.insert(sum);
        }
    }
    cout<<*se.rbegin();
    return 0;
}