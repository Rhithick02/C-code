#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,temp;
        cin>>a>>b>>c;
        cout<<max((a+b+c+2)/3,max(min(a,c),(max(a,c)+1)/2))<<endl;
    }
}