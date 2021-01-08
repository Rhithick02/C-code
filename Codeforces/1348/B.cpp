#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        vi ar(n),se;
        For(i,n) 
        {
            cin>>ar[i];
            if(find(se.begin(),se.end(),ar[i])!=se.end())
                continue;
            se.push_back(ar[i]);
        }
        sort(se.begin(),se.end());
        if(se.size()>k) cout<<"-1";
        else
        {
            if(se.size()<k)
            {
                while(se.size()!=k)
                    se.push_back(se[se.size()-1]);
            }
            int l=0;
            for(int i=0;i<ar.size();i++,l++)
            {
                if(l==se.size()) l=0;
                if(se[l]!=ar[i]) ar.insert(ar.begin()+i,se[l]);
            }
            cout<<ar.size()<<endl;
            For(i,ar.size()) cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}