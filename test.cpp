#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    y=log(x)/log(y);
    cout<<y;
    return 0;
}