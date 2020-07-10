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
#define r s.length()

int main(){
    ios::sync_with_stdio(false);
    int n,cnt=0;
    string s;
    cin>>n>>s;
    for(int i=25;i>0;i--){
        For(j,0,r){
            if(s[j]!='a'+i) continue;
            while(j && s[j]-1==s[j-1] && s[j]=='a'+i) cnt++,s.erase(j,1);
            while(j!=r-1 && s[j]-1==s[j+1] && s[j]=='a'+i) cnt++,s.erase(j,1),j--;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}