#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    vector<int>ar(n+2),prime;
    prime.push_back(2);
    ar[2]=1;
    for(int i=0;i<n+2;i++)
    {
        int flag=-1,buf=1,count=0;
        if(i>2)
        {
            for(int j=0;j<prime.size();j++)
            {
                if(i%prime[j]==0)
                {
                    count++;
                    flag=0;
                    break;
                }
            }
            if(flag!=0)
                prime.push_back(i);
            ar[i]=buf+count;
        }
    }
    set<int> st;
    for(int i=2;i<=n+1;i++)
        st.insert(ar[i]);
    cout<<st.size()<<endl;
    for(int i=2;i<=n+1;i++)
        cout<<ar[i]<<" ";
    return 0;
}