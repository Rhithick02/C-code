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
    while(t--)
    {
        int n,fl=0;
        string s[2];
        cin>>n>>s[0]>>s[1];
        For(i,0,s[0].length()){
            if(s[fl][i]>'2'){
                fl=(fl+1)%2;
                if(s[fl][i]<='2'){
                    fl=-1;
                    break;
                }
            }
        }
        if(fl>0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}



