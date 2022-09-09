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
   ll i=0, n; cin>>n; 
   ll a[n];
   fi(i,1,n)
   {
       a[i]=i;
   }
   if(n==1)
   {
       cout<<1<<endl;
   }
 
  
    else
    {
        fi(i,2,n)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[1];
        cout << endl;
    }


   
   }
    
   return 0;
}