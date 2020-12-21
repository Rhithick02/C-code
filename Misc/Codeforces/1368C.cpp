#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<4+3*n<<endl;
    for(int i=0;i<n+2;i++) cout<<i<<" "<<i<<endl;
    for(int i=0;i<n+1;i++) cout<<i+1<<" "<<i<<endl;
    for(int i=0;i<n+1;i++) cout<<i<<" "<<i+1<<endl;
    return 0;
}