#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,k;
    cin>>n>>k;
    vi ar(n),st;
    set<int> se;
    For(i,n) cin>>ar[i];
    For(i,n)
    {
        if(se.find(ar[i])==se.end())
        {
            if(st.size()<k) st.push_back(ar[i]);
            else
            {
                se.erase(*st.begin());
                st.erase(st.begin());                
                st.push_back(ar[i]);                
            }
            se.insert(ar[i]);
        }
    }
    cout<<st.size()<<endl;
    For(i,st.size()) cout<<st[st.size()-i-1]<<" ";
    return 0;
}