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
      
      int n,m; cin>>n>>m; 
      if((n+m)%2==0)
      {
          cout<<"Tonya"<<endl;
      }
      else
      {
          cout<<"Burenka"<<endl;
      }
   }
    
    
   return 0;
}
