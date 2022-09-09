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
      ll i,c=0,n,mx_p,mn_p,k; 
      cin>>n;
      ll a[n];
      fi(i,0,n-1)
      {
          cin>>a[i];
      }
      st(n);
      mx_p=a[n-1]-a[0];
      mn_p=a[n-2]-a[1];
      cout<<mx_p+mn_p<<endl;
      
       

    }
      
   return 0;
}
