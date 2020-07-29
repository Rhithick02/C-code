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
    int n,k,m,t,dr,que,pos;
    cin>>n>>k>>m>>t;
    dr = k;
    For(i,0,t){
        cin>>que>>pos;
        if(!que){
            if(pos>=dr) n=pos;
            else n-=pos,dr -= pos;
        }
        else{
            if(pos<=dr) dr++;
            n++;
        }
        cout<<n<<" "<<dr<<"\n";
    }
    return 0;
}