#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]!=s[i-1]) continue;
        count++;
        if(s[i-1]==s[i+1])
        {
            if(s[i-1]=='R') s[i]='B';
            else if(s[i-1]=='B') s[i]='G';
            else s[i]='R';
        }
        else 
        {
            if((s[i-1]=='R' || s[i-1]=='B') && (s[i+1]=='B' || s[i+1]=='R')) s[i]='G';
            else if((s[i-1]=='G' || s[i-1]=='B') && (s[i+1]=='B' || s[i+1]=='G')) s[i]='R';
            else s[i]='B';
        }
    }
    if(s[n-1]==s[n-2])
    {
        count++;
        if(s[n-2]=='R') s[n-1]='G';
        else if(s[n-2]=='G') s[n-1]='B';
        else s[n-1]='R';
    }
    cout<<count<<endl<<s;
    return 0;
}