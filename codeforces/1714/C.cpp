#include<bits/stdc++.h>
using namespace std;
#define ll    signed long long
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
     ll i=9,n; cin>>n; 
     vector<ll>v;
     if(n<10)
     cout<<n<<endl;
     else
     {
      while(n>0)
      {
          n=n-i;
          if(n<=0)
          {
              v.p_b(n+i);
          }
          
          if(n>0)
          {
              v.p_b(i);i--;
          }
          
          
      }
     }
     sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
        
    }
    
    cout<<endl;
      
  }
   
    
   return 0;
}
