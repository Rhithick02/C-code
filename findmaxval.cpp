#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <int> a(51);
        int count=0;
        char ch;
        for(int i=0;i<51;i++)
        {
            count++;
            cin>>a[i];
            cin>>ch;
            if(ch=='\0'||ch=='\n')
            break;
        }
        for(int i=0;i<count;i++)
        {
            if(a[i]==count-1)
            {
                a[i]=0;
                break;
            }
        }
        sort(a.begin(),a.end());
        cout<<a[count-1]<<endl;
    }
    return 0;
}