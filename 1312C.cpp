#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag=0;
        cin>>n>>k;
        vil ar(n);
        set<int> te;
        For(i,n) cin>>ar[i];
        For(i,n)
        {
            if(!ar[i]) continue;
            int count=0;
            if((ar[i]-1)%k==0)
            {
                if(te.find(0)==te.end()) te.insert(0),ar[i]--;
                else
                {
                    flag=1;
                    break;
                }
            }
            while(ar[i])
            {
                if(ar[i]%k==0) count++;
                else if((ar[i]-1)%k==0)
                {
                    if(te.find(count)==te.end()) te.insert(count),ar[i]--,count++;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else if(ar[i]!=1)
                {
                    flag=1;
                    break;
                }
                ar[i]/=k;
            }
            if(flag) break;
        }
        if(flag) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}