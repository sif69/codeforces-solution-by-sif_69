#include<bits/stdc++.h>
using namespace std;

#define ll     unsigned long long 
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
          ll a,b,c,d,i,f=0;
          cin>>a>>b>>c>>d;
          ll x = a * d, y = b * c;
        if (x == y)
        {
         cout <<0<<endl;
        }
        else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
        {
        cout <<1<<endl;
        }
        else
        {
        cout <<2<<endl;
        }
    }
       
  
    
         
      
      
    
    
    
   return 0;
}