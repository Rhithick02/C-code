#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        vi st(3);
        For(i,3) cin>>st[i];
        sort(st.begin(),st.end());
        if(st[0]+st[1]<=st[2]) cout<<st[0]+st[1];
        else cout<<(st[0]+st[1]+st[2])/2;
        cout<<endl;
    }
    return 0;
}