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
        int n,odd=0;
        cin>>n;
        vi ar(n);
        For(i,n)
        {
            cin>>ar[i];
            if(ar[i]&1) odd++;
        }
        if(odd%2==0) cout<<"YES";
        else
        {
            int flag=0;
            sort(asc(ar));
            For(i,n-1) 
            {
                if(ar[i]==ar[i+1]-1) 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}