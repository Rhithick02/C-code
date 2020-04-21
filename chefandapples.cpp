#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
       /* //for case 1
        int case_1=n/k;
        //for case 2
        int case_2=0;
        temp=n;
        do
        {
            temp-=k;
            case_2++;
        }while(temp!=0);
        if(n==k)
        {   
            if(case_1==case_2*n)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else
        {
            if(case_1=case_2)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }*/
        if(n/k==k||(n/k)%k==0)
        cout<<"NO\n";
        else
        cout<<"YES\n";    
        
    }
    return 0;
}