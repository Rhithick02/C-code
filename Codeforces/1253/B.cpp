#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main(){
    int n,flag=0;
    cin>>n;
    set<int> te,st,si;
    vi ar(n);
    For(i,n) cin>>ar[i];
    For(i,n)
    {
        if(ar[i]>0 && si.find(ar[i])==si.end())
            te.insert(ar[i]),si.insert(ar[i]);
        else if(ar[i]>0)
        {
            flag=1;
            break;
        }
        else
        {
            if(te.find(-ar[i])==te.end())
            {
                flag=1;
                break;
            }
            te.erase(-ar[i]);
            if(!te.size()) st.insert(i+1),si.clear();
        }
    }
    if(flag || te.size()!=0) cout<<-1<<endl;
    else 
    {
        vi arr;
        cout<<st.size()<<endl;
        cout<<*st.begin()<<" ";
        for(auto it: st) arr.pb(it);
        for(int i=1;i<arr.size();i++) cout<<arr[i]-arr[i-1]<<" ";
        cout<<endl;
    }
    return 0;
}