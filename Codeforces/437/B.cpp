#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int sum,limit,tot=0,flag=0;
    cin>>sum>>limit;    
    vector< pair<int,int> > st(limit);
    for(int i=1;i<=limit;i++)
        st[i-1].second = i, st[i-1].first = i & -i;
    sort(st.begin(), st.end());
    vector<int> ans;
    int su = 0, i = limit-1;
    // for(auto te : st)
    //     cout<<te.second<<" "<<te.first<<endl;
    while(su < sum & i >= 0)
    {
        // cout<<i<<endl;
        // cout<<su<<endl;
        while(i>=0)
            if(st[i].first + su <= sum)
                break;
            else i--;
        if(i >= 0)
            su += st[i].first, ans.push_back(st[i].second), i--;
        
    }
    if(su == sum)
    {
        cout<<ans.size()<<endl;
        For(i,ans.size()) cout<<ans[i]<<" ";        
    }
    else 
        cout<<"-1";
    return 0;
}