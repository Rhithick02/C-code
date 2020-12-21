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

string s;
int check(int num,int &ind){
    int cnt=0;
    for(;ind<n;ind++){
        if(s[ind]!='0'+num) cnt++;
        else break;
    }
    ind++;
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int cnt=1e7;
        cin>>s;
        For(i,0,10){
            For(k,0,10){
                int te=0,pos=0;
                while(pos<n) te+=check(i,pos)+check(k,pos);
                if((n-te)%2==0 || k==i) cnt=min(cnt,te);
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
