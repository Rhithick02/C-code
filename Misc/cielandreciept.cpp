#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int price,menu=0,sum;
        cin>>price;
        sum=price;
        int i;
        for(i=0;pow(2,i)<=sum;i++);
        i--;
        if(sum!=0)
        {
            sum=price-pow(2,i);
            menu++;
            continue;
        }   
        cout<<menu<<endl;
    }
    return 0;
}