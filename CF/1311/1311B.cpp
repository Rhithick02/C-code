#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,flag=0,temp;
        cin>>n>>p;
        vector <int> ar(n),pi(p);
        vector <int>:: iterator  it;
        for(int i=0;i<n;++i)
            cin>>ar[i];
        for(int i=0;i<p;++i)
            cin>>pi[i];
        for(int i=0;i<n;i++)
        {
            it=min_element(ar.begin()+i,ar.end());
            if(it==ar.begin()+i)
                continue;
            else
            {
                for(auto j=it-ar.begin();j>0;j--)
                {
                    if(i>0 && j<=i)
                        break;
                    if(find(pi.begin(),pi.end(),j)==pi.end())
                    {
                        flag=-1;
                        break;
                    }
                }
            }
            if(flag==-1)
            {
                cout<<"NO\n";
                break;
            }              
            ar[it-ar.begin()]=ar[i];
            ar[i]=*it;            
        }
        if(flag==0)
            cout<<"YES\n";
    }
}