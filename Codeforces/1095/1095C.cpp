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
    int n,k,count=0,temp;
    cin>>n>>k;
    temp=n;
    while(temp)
    {
        if(temp&1) count++;
        temp=temp>>1;
    }
    if(k<count || k>n) cout<<"NO\n";
    else
    {
        int ans=count;
        priority_queue<int> q;
        cout<<"YES\n";
        temp=n,count=0;
        while(temp)
        {
            if(temp&1) q.push(1<<count);
            count++;
            temp=temp>>1;
        }
        while(ans<k)
        {
            int te=q.top();
            q.pop();
            q.push(te/2),q.push(te/2);
            ans++;
        }
        while(!q.empty())
        {
            cout<<q.top()<<" ";
            q.pop();
        }
        cout<<endl;
    }
    return 0;

}