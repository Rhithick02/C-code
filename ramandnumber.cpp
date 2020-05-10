#include <bits/stdc++.h>
using namespace std;
#define lli long long
set<int> numbers;
void generateNumbers(lli n, lli num, int i, int j){
   if (num > 0 && num <= n)
      numbers.insert(num);
   if (num > n)
      return;
   if (num*10+i > num)
      generateNumbers(n, num*10+i, i, j);
   generateNumbers(n, num*10+j, i, j);
}

int main(){
   lli n;
   cin>>n;
   for (int i = 0; i <= 9; i++)
      for (int j = i + 1; j <= 9; j++)
         generateNumbers(n, 0, i, j);
   
   cout<<numbers.size()<<endl;
   
   return 0;
}








  


