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
    int t;
    cin>>t;
    while(t--)
    {
        int n,even=0,odd=0;
        cin>>n;
        vi ar(n);
        For(i,0,n) 
        {
            cin>>ar[i];
            if(i%2!=ar[i]%2)
            {
                if(ar[i]&1) odd++;
                else even++;
            }
        }
        if(even!=odd) cout<<-1<<endl;
        else cout<<even<<endl;
    }
    return 0;
}