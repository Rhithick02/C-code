#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
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
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vi r1(10),r2(10);
        for(int i=0;i<s.length();i+=2) r1[s[i]-'0']++;
        for(int i=1;i<s.length();i+=2) r2[s[i]-'0']++;
        sort(des(r1)),sort(des(r2));
        int res=abs(r2[0]-r1[0]);
        For(i,1,10) res+=r1[i]+r2[i];
        cout<<res<<"\n";
    }
    return 0;
}