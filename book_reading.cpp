#include<bits/stdc++.h>
using namespace std;

#define lli long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n, m;
        cin>>n>>m;
        lli ch = (n/10)/m, ans = 0;
        for(int i=1;i<=10;i++)
            ans += (i*m)%10;
        ans *= ch;
        lli cnt = n/m, temp = cnt - ch*10;
        for(int i=1;i<=temp;i++)
            ans += (i*m)%10;
        cout<<ans<<endl; 
    }
    return 0;
}