#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define p_b push_back
#define s1 string 
int main()
{
     ll t; cin>>t; 
     while(t--)
     {
          s1 s; cin>>s; 
          ll a=0,b=0,x=0,j,i; 
          for(i=0;i<s.size();i++)
          {
               j=s[i]-'0'; 
               if(j%2==0)
               {
                    a=a*10+(j/2); 
                    b=b*10+(j/2); 
               }
               else
               {
                    if(!x)
                    {
                         a=a*10+(j/2)+1; 
                         b=b*10+(j/2); 
                    }
                    else
                    {
                         a=a*10+(j/2); 
                         b=b*10+(j/2)+1; 
                    }
                    x^=1;
               }
          }
          cout<<a<<' '<<b<<'\n'; 
     }
}