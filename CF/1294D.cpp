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
#define MAX 400002

int main(){
    ios::sync_with_stdio(false);
    int query,x,pointer=0,y;
    vector<bool> mex(MAX);
    cin>>query>>x;
    vi st(x);
    For(i,0,query){
        cin>>y;
        int k=y%x;
        if(k+st[k]<MAX){
            mex[k+st[k]]=true;
            st[k]+=x;
        }
        while(mex[pointer]) pointer++;
        cout<<pointer<<"\n";
    }
    return 0;
}

