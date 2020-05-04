#include<bits/stdc++.h>
using namespace std;
#define poww 1000000
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double sum=0;
        cin>>n;
        double ar[n+1];
        for(int i=0;i<=n;i++)
            cin>>ar[i];
        if(n==1)
            cout<<-1*ar[1]/ar[0];
        else
        {
            for(int i=-1000000;i<=1000000;i++)
            {
                if(n==2)
                    sum=ar[0]*pow(i,2)+ar[1]*i+ar[2];
                else if(n==3)
                    sum=ar[0]*pow(i,3)+ar[1]*pow(i,2)+ar[2]*i + ar[3];
                else
                    sum=ar[0]*pow(i,4)+ar[1]*pow(i,3)+ar[2]*pow(i,2)+ar[3]*i + ar[4];
                if(!sum)
                {
                    cout<<i;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}