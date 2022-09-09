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
     ll i,c=1,n,h,k,j;
     cin>>n>>h>>k;
     vector<ll>v;
     for(i=1;i<=n;i++)
     {
         j=(h-1)/i;
         j=(j+1)*i;
         if(j>=h && j<=k)
         {
             v.p_b(j);
         }
     }
     if(v.size()==n)
     {
         cout<<"YES"<<endl;
         for(i=0;i<v.size();i++)
         {
             cout<<v[i]<<" ";
         }
         cout<<endl;
     }
        else
        {
            cout<<"NO"<<endl;
        }
        
              
        
       

    }
      
   return 0;
}
