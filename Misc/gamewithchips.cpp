#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,m,k,count=0;
    string store;
    cin>>n>>m>>k;    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(j==n-1)
                store+='R';
            else if(i%2==0)
                store+='D';
            else 
                store+='U';
        }
    cout<<2*m*n<<endl;
    cout<<store;
    for(int i=store.length()-1;i>=0;i--)
    {
        if(store[i]=='U')
            cout<<"D";
        else if(store[i]=='D')
            cout<<"U";
        else if(store[i]=='R')
            cout<<"L";
        else 
            cout<<"R";
    }
    cout<<endl;
    return 0;    
}