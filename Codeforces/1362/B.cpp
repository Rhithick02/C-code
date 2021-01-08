#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
        int n;
        cin>>n;
        vi ar(n);
        set<int>te;
        For(i,n) cin>>ar[i],te.insert(ar[i]);
        for(int i=1;i<=1024;i++)
        {
            int flag=0;
            For(j,n)
            {
                if(te.find(ar[j]^i)==te.end())
                {
                    flag=-1;
                    break;
                }
            }
            if(flag==-1 && i!=1024) continue;
            else if(flag!=-1)
            {
                cout<<i;
                break;
            }
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}