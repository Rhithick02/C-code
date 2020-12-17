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
        lli n,m,k=0,time=0,store=0,temp=0;
        cin>>n>>m;
        set<int> te;
        vi ar(n),br(m);
        For(i,n) cin>>ar[i];
        For(i,m) cin>>br[i];
        while(k<m)
        {
            int count=0;
            for(int i=store;i<n;i++)
            {
                if(br[k]!=ar[i])
                {
                    te.insert(ar[i]);
                    continue;
                }
                time+=2*(i-temp)+1;
                store=i+1;
                k++;
                break;
            }
            for(int i=k;i<m;i++)
            {
                if(te.find(br[i])!=te.end())
                {
                    count++,k++;
                    continue;
                }
                break;
            }
            time+=count;
            temp+=count+1;
        }
        cout<<time<<endl;
    }
    return 0;
}