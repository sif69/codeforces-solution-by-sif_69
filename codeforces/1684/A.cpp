#include<bits/stdc++.h>
using namespace std;
#define ll    unsigned long long
#define lg   long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1   string
#define p_b  push_back
#define st(n)   sort(a,a+n)
#define rev  reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())



int main( )
{
    ll t; 
    cin>>t; 
   
    while(t--)
    {
      ll i,n; s1 s; cin>>s;
        if(s.size()==2)
     {
         if(s[0]-'0'>s[1]-'0')
         {
             cout<<s[1]<<endl;
         }
         else if (s[0]-'0'<s[1]-'0')
         {
             cout<<s[1]<<endl;
         }
         else
         {
             cout<<s[0]<<endl;
         }
         
     }
      srt(s);
      if(s.size()==1)
      {
          cout<<s[0]<<endl;
          
      }
      else if(s.size()>2)
      {
          cout<<s[0]<<endl;
      }
      
     
  }
   
    
   return 0;
}
