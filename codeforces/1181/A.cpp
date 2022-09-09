#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   
      
      ll x,y,z,a,b,c,d; 
      cin>>x>>y>>z;
      ll total=(x+y)/z;
      a=(total)-(x/z);
      b=(total)-(y/z);
      c=fabs(y-a*z);
      d=fabs(x-b*z);
      
      if((x/z)+(y/z)==total)
      {
          cout<<total<<" "<<0<<endl;
      }
      
       else
       {
           cout<<total<<" "<<min(c,d)<<endl;
       }
   
   
    
    
   return 0;
}