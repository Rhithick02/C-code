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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x1=0,y1=0,ans=0;
        set<pair<pair<int,int>,pair<int,int>>> te;
        For(i,s.size())
        {
            int x2=x1,y2=y1;
            if(s[i]=='N') y1++;
            else if(s[i]=='S') y1--;
            else if(s[i]=='W') x1--;
            else x1++;
            if(te.find({{x1,y1},{x2,y2}})!=te.end() || te.find({{x2,y2},{x1,y1}})!=te.end()) ans+=1;
            else
            {
                ans+=5;
                te.insert({{x1,y1},{x2,y2}});
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}