#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,tot_count=0;
        cin>>D;
        char ch[D];
        cin>>ch;
        float val,rem;
        val=D*0.75;
        int count=val;
        rem=val-count;
        if(rem>0)
        count++;
        val=count;       
        count=0;
        for(int i=0;i<D;i++)
        {
            if(ch[i]=='P')
            count++;
        }
        if(val<=count)
        cout<<"0"<<endl;//no need for proxy
        else if(D<=4)
        {
            int count1=0;
            for(int i=0;i<D;i++)
            {
                if(ch[i]=='P')
                count1++;
            }
            if(count<val)
            cout<<"-1"<<endl;//not possible for proxy
        }
        else
        {
            val=val-count;
            for(int i=2;i<D-2;i++)
            {
                if(ch[i]=='A'&&(ch[i-1]=='P'||ch[i-2]=='P')&&(ch[i+1]=='P'||ch[i+2]=='P'))
                tot_count++;                           
            }
            if(val<=tot_count)
            cout<<val<<endl;//no.of proxy days
            else
            {
                cout<<"-1"<<endl;
            }            
        }        
    }
    return 0;
}