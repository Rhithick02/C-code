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
        int n,co=0,cz=0;
        string s,front="",end="";
        cin>>n>>s;
        For(i,0,s.length()){
            if(s[i]=='0' && !co) front+=s[i];
            else if(s[i]=='0') break;
            else co++;
        }
        For(i,0,s.length()){
            if(s[n-1-i]=='1' && !cz) end+=s[n-1-i];
            else if(s[n-1-i]=='1') break;
            else cz++;
        }
        string ans;
        if(front.size()+end.size()==n) ans=front+end;
        else ans=front+"0"+end;
        cout<<ans<<endl;
    }
    return 0;
}