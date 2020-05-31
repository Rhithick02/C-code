/*case1: if m>total amount of n then NO
  case2: if m<total amount of n but no combinations match then NO
  case3: if m<total amount of n but there is combination then YES*/
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      int t;
      cin>>t;
      while(t--)
      {
          int n,m,sum=0;
          cin>>n>>m;
          vector <int> st1[n];
          for(int i=0;i<n;i++)
          {

              cin>>st1[i];
              sum+=st1[i];
          }
          if(sum<m)
          cout<<"NO"<<endl; 
          else
          {
              sum=0;
              sort(st1.begin(),st1.end());
              for(int i=0;i<n;i++)
              {
                  if(st[i]>m)
                  break;
              }
              n=i-1;
              if(st1[n]==m)
              cout<<"YES"<<endl;
              else
              {
                  int count=0; 
                  for(int i=0;i<n;i++)
                  {
                      sum=st1[i];
                      for(int j=i+1;j<n;j++)
                      {
                          sum+=st1[j];
                          if(sum==m)
                          {
                              count++;
                              break;
                          }
                          
                      }

                  }
                  if(count==0)
                  cout<<"NO"<<endl;             
                  else 
                  cout<<"YES"<<endl;
              }
              
          }
                    
      }
      return 0;
  }
