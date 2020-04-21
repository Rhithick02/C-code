#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,temp=0;
    cin>>n;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]==ar[i+1]-1)
        {
            if(temp>=1)
            {
                count+=3;
                i++;
            }
            else if(ar[i]==ar[i+2]-2 && i<n-2)
                {
                    count+=3;
                    i++;
                }
            else 
                count+=1;
                temp=0;
        }
        else if(ar[i]==ar[i+1])
            temp++;
    }
    cout<<count;
    return 0;
}
