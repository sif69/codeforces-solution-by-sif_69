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
           ll i,c=0,n,x; cin>>n; 
          vector<ll>v; 
          ll a[n];
          cout<<n<<endl; 
          fi(i,1,n)
          {
              cout<<i<<" ";
              a[i]=i;
          }
           cout<<endl;
           for(i=2;i<=n;i++)
           {
               swap(a[i],a[i-1]);
               for(ll j=1;j<=n;j++) cout<<a[j]<<" ";
               cout<<endl;
           }
         
   }
    
    
   return 0;
}
