#include<bits/stdc++.h>
using namespace std;
#define ll   unsigned long long
#define lg   long long
#define f    for(i=0;i<n;i++)
#define f1   for(j=0;j<m;j++)
#define f2   for(i=0;i<s.size();i++)
#define f3   for(i=n;i>=0;i--)
#define f4   for(i=s.size();i>=0;i--)
#define f5   for(i=0;i<v.size();i++)
#define s1   string
#define p_b  push_back
#define st   sort(a,a+n)
#define sts  sort(s.begin(),s.end())
#define stv  sort(v.begin(),v.end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())


int main()
{
 
   ll t;cin>>t;while(t--)
   {
     ll n;
     cin>>n;
     if(n%2!=0)
     {
         cout<<"-1"<<endl;
     }
     else
     {
         cout<<"0"<<" "<<"0"<<" "<<n/2<<endl;
     }
     
        
        
       
   }
   return 0;
}
