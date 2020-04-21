#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define vi vector<int>

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    set<int> tr;
    vi pref(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];

    for(int i=n-1;i>=0;i--)
    {
        tr.insert(ar[i]);
        pref[i] = *tr.rbegin();
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==pref[i] && pref[i]!=pref[i+1])
            cout<<"0 ";
        else if(ar[i]==pref[i] && pref[i]==pref[i+1])
            cout<<"1 ";
        else 
            cout<<pref[i]-ar[i]+1<<" ";
    }
    return 0;
}