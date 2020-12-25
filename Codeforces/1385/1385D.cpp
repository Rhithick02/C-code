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

int n;
string s;

int traverse(int low,int high, int temp){
    if(temp==log2(n)) return s[low]!=temp+'a';
    int count[2]={0};
    For(i,low,low+high>>1) if(s[i]!='a'+temp) count[0]++;
    count[0]=count[0]+traverse(low+high>>1,high,temp+1);
    For(i,low+high>>1,high) if(s[i]!='a'+temp) count[1]++;
    count[1]=count[1]+traverse(low,low+high>>1,temp+1);
    return min(count[0],count[1]);
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        cout<<traverse(0,n,0)<<"\n";
    }
    return 0;
}