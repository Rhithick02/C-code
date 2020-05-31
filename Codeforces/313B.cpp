#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    string s;
    cin>>s;
    int n=s.length(),m,l,r;
    int temp=0;
    cin>>m;
    vector<int> ar,pr;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            temp++;
        ar.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        if(l>1)
            pr.push_back(ar[r-2]-ar[l-2]);
        else 
            pr.push_back(ar[r-2]);
    }
    for(auto it: pr)
        cout<<it<<endl;
    return 0;
}