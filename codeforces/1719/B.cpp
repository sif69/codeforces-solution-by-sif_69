#include<bits/stdc++.h>
using namespace std;

#define ll    unsigned long long 
#define lg     long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
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
       ll n,k; 
      
      cin>>n>>k;
      vector<ll>v;
      if(k%4!=0)
      {
      cout<<"YES"<<endl;
      
      for(ll i=1;i<n;i+=2)
      {
          if(((i+k)*(i+1))%4==0)
          
          {
              cout<<i<<" "<<i+1<<endl;
          }
         else
          {
             cout<<i+1<<" "<<i<<endl;
          }
          
      }
     
      }
      else
      {
          cout<<"NO"<<endl;
      }
          
      }
  
    
         
      
      
    
    
    
   return 0;
}
