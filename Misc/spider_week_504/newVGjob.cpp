#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int s,d,n,l,k,m;
    vector<int> count,ar;
    cin>>d>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>k>>m;
        if(d+s*(l-2)>=k)
            count.push_back(-1);
        else
        {
            lli temp=k,ind=0;
            for(int j=l;;j+=m)
            {
                if(temp>=(d+s*(j+m-3)))
                    temp-=(d+s*(j+m-3));
                else  
                {
                    if(temp!=0)
                        ind=j;
                    break;
                }
            }
            if(ind!=0)
            {
                for(int j=ind;j<ind+m-1;j++)
                {
                    if(d+s*(l-1)>temp)
                    {
                        count.push_back(j-1);
                        break;
                    }
                    l++;
                }
            }
        }
    }
    for(auto it:count)
        cout<<it<<"\n";
    return 0;
}