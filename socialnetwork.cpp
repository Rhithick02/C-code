#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,k,x,temp=0;
    cin>>n>>k;
    queue<int> s;
    stack<int>st;
    set<int> se;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(find(se.begin(),se.end(),x)!=se.end())
            continue;
        s.push(x);
        if(s.size()>k)
        {
            se.erase(s.front());
            s.pop();
        }
        se.insert(x);        
    }
    cout<<s.size()<<endl;
    while(s.size()!=0)
    {
        x=s.front();
        st.push(x);
        s.pop();
    }
    while(st.size()!=0)
    {
        x=st.top();
        cout<<x<<" ";
        st.pop();
    }
    return 0;
}