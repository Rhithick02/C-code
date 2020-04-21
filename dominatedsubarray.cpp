#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 200001
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,dom;
        cin>>n;
        vector<int> ar(n),br(mod),st;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            br[ar[i]]++;
        }
        if(n<2)
            cout<<"-1"<<endl;
        else 
        {
            dom=max_element(br.begin(),br.end())-br.begin();
            int temp=*(br.begin()+dom);
            sort(br.begin(),br.end(),greater<int>());
            if(temp==ar[0] && temp==ar[1])
                cout<<"-1"<<endl;
            else
            {
                int count=0;
                for(int i=0;i<n;i++)
                {
                    if(ar[i]==dom)
                        st.push_back(i+1);
                }
                for(int i=1;i<st.size();i++)
                {
                    if(count==0)
                       count=st[i]-st[i-1]; 
                    else if(st[i]-st[i-1]<count)
                        count=st[i]-st[i-1];
                }
                cout<<count+1<<endl;
            }
        }
    }
    return 0;
}