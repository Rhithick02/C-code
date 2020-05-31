#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n;
    cin>>n;
    if(n<3)
        cout<<"-1";
    else 
    {
        For(i,n) cout<<n-i<<" ";
        cout<<endl;
    }
    return 0;
}