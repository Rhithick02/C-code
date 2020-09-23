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
#define n s.length()

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string s,res="";
        deque<int> odd,even;
        cin>>s;
        For(i,0,n) ((s[i]-'0')&1? odd:even).pb(s[i]-'0');
        while(odd.size() && even.size()){
            if(even[0]<=odd[0]){
                res+=even[0]+'0';
                even.pop_front();
            }
            else{
                res+=odd[0]+'0';
                odd.pop_front();
            }
        }
        while(odd.size()){
            res+=odd[0]+'0';
            odd.pop_front();
        }
        while(even.size()){
            res+=even[0]+'0';
            even.pop_front();
        }
        cout<<res<<"\n";
    }
    return 0;
}