#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=n/2;
        cin>>n;
        vector <int> a(n),b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[n/2]==b[n/2])
        cout<<"0"<<endl;
        else
        {
            for(int i=n/2+1,j=n/2-1;i<n && j>=0;i++,j--)
            {
                if(a[i]==b[j])
                    cout<<(i-j)/2<<endl;
                else 
                    count--;
            }
            if(count==0)
                cout<<"-1"<<endl;
        }
    }
    return 0;
}