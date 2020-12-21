#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,m;
    cin>>n>>m;
    if(m==0) cout<<"YES";
    else {
        vi ar(m);
        For(i,m) cin>>ar[i];
        sort(ar.begin(),ar.end());
        if(ar[0]==1 || ar[m-1]==n) cout<<"NO";
        else 
        {
            int count=1,flag=-1;
            for(int i=1;i<m;i++)
            {
                if(ar[i]==ar[i-1]+1) count++;
                else count=1;
                if(count==3) 
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0) cout<<"NO";
            else cout<<"YES";
        }
    }
    return 0;
}