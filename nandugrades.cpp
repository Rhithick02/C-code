#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli n,count=0;
    float sum=0;
    cin>>n;
    vector<int> ar(n);
    For(i,n)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar.begin(),ar.end());
    if(sum/n==5 || (int(sum/n)==4 && sum/n-int(sum/n)>=0.5))
        cout<<"0";
    else 
    {
        For(i,n)
        {
            sum+=5-ar[i];
            count++;
            if(sum/n==5 || (int(sum/n)==4 && sum/n-int(sum/n)>=0.5))
            {
                cout<<count;
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}