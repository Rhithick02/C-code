#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int factorial(int x)
{
    if(x==1)
        return 1;
    if(x==0)
        return 1;
    return x*factorial(x-1) ;
}
int main(){
    int sum1=0,sum2=0,count=0;
    float prob=1;
    string s1,s2;
    cin>>s1>>s2;
    For(i,s1.length())
    {
        if(s1[i]=='+') sum1++;
        else sum1--;
        if(s2[i]=='+') sum2++;
        else if(s2[i]=='-') sum2--;
        else count++;
    }
    //cout<<count<<" "<<sum2<<" "<<sum1<<" "<<endl;    
    if(count==0)
    {
        if(sum1==sum2) cout<<prob;
        else cout<<"0";
    }    
    else 
    {
        int distance=abs(sum2-sum1);
        if((count-distance)/2<0)
            cout<<"0";
        else 
        {
            prob=factorial(count)/(factorial((count+distance)/2)*factorial((count-distance)/2)*pow(2,count));
            cout<<setprecision(20)<<prob;
        }
    }
    return 0;
}