#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vi ar(n);
        For(i,n) cin>>ar[i];
        sort(des(ar));
        For(i,n)
        {
            if(ar[i]>n-i) continue;
            {
                flag=1;
                cout<<n-i+1<<endl;
                break;
            }
        }
        if(!flag) cout<<"1\n";
    }
    return 0;
}