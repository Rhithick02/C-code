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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vi st;
        set<int> twone;
        int found,count=0;
        found=s.find("one",0);
        while(found!= string::npos)
        {
            if(s[found-1]=='o') twone.insert(found+2);
            else twone.insert(found+1);
            found=s.find("one",found+1);
        }
        found=s.find("two",0);
        while(found!= string::npos)
        {
            if(s[found+3]=='o') twone.insert(found+2);
            else twone.insert(found+3);
            found=s.find("two",found+1);
        }
        cout<<twone.size()<<endl;
        for(auto it: twone) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}