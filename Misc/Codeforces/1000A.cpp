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
    int n,cnt=0;
    cin>>n;
    string s;
    vector<string> last(n),cur;
    For(i,0,n) cin>>last[i];
    For(i,0,n){
        int fl=1;
        cin>>s;
        For(j,0,n){
            if(s==last[j]){
                last[j]=" ";
                fl=0;
                break;
            }
        }
        if(fl) cur.pb(s);
    }   
    For(i,0,n){
        if(last[i]==" ") continue;
        int temp=2000,pos=0;
        For(j,0,cur.size()){
            int te=0;
            if(last[i].size()!=cur[j].size())
                continue;
            For(k,0,cur[j].size())
                if(last[i][k]!=cur[j][k]) te++;
            if(temp>te){
                pos=j;
                temp=te;
            }
        }
        cur[pos]=" ";
        cnt+=temp;
    }
    cout<<cnt<<"\n";
}