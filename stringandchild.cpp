#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    string s1,child1,s2,tempp;
    int flag;
    cin>>tempp>>s2;
    if(tempp.length()>s2.length()) s1=s2,s2=tempp;
    else s1=tempp;
    child1="";
    for(int i=1;i<=s1.length();i++)
    {
        flag=0;
        if(s1.length()%i==0)
        {
            char temp1[i];
            For(z,i) temp1[z]=s1[z];
            int k=0;
            For(j,s1.length())
            {                
                if(s1[j]==temp1[k]) k++;
                else 
                {
                    flag=-1;
                    break;
                }
                if(k==i) k=0;
            }
            if(!flag) 
            {
                For(j,i) child1+=temp1[j];                
                break;
            }            
        }                
    }
    if(!child1.length()) cout<<"0";
    else
    {
        flag=0;
        int k=0;
        For(i,s2.length())
        {
            if(s2[i]==child1[k]) k++;
            else
            {
                flag=-1;
                break;
            }
            if(k==child1.length()) k=0;
        }
        if(flag==-1) cout<<"0";
        else
        {
            int b=0;
            vi a;
            for(int i=child1.length();i<=s1.length();i+=child1.length()) if(s1.length()%i==0) a.push_back(i);
            for(auto it: a) if(s2.length()%it==0) b++;
            cout<<b;
        } 
    }
    return 0;
}