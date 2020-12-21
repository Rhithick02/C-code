#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,temp,sto[3],k=0;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        st.insert(temp);
    }
    if(st.size()<=2)
        cout<<"YES";
    else if(st.size()==3)
    {
        for(int i:st)
            sto[k++]=i;
        if((sto[0]+sto[2])/2==sto[1] && (sto[0]+sto[2])%2==0)
            cout<<"YES";
        else    
            cout<<"NO";
    }        
    else 
        cout<<"NO";
        cout<<endl;
    return 0;
}