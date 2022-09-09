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
          ll x,y,s=0,i,c=0,n; 
          cin>>n; 
          ll mn1=0,mn2=0,mx1=0,mx2=0;
            while(n--)
         {
              cin>>x>>y;
              mn1=min(mn1,x);
              mx1=max(mx1,x);
              mn2=min(mn2,y);
              mx2=max(mx2,y);
         }
         ll j=(fabs(mn1)+fabs(mn2)+mx1+mx2)*2;
         cout<<j<<endl;
        
   }
    
    
   return 0;
}
