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
      ll i,j,c=0,n,k; cin>>n>>k;
      ll a[n],b[n];
      fi(i,0,n-1)
      {
          cin>>a[i];
      }
      fi(i,0,n-1)
      {
          b[i]=a[i];
      }
        sort(a,a+n);
        
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
                if(a[i]==b[j])
               
                c++;
            }
        }
       cout<<k-c<<endl;
   }
    
    
   return 0;
}