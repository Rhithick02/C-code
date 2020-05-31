#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,big;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0)
            big=ar[i];
        else
        {
            if(big<ar[i])
                big=ar[i];
        }
    }        
    cout<<big<<endl;
    return 0;
}