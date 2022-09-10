#include<bits/stdc++.h>
using namespace std;
#define ll   unsigned long long
#define lg   long long
#define f    for(i=0;i<n;i++)
#define f1   for(j=0;j<m;j++)
#define f2   for(i=0;i<s.size();i++)
#define f3   for(i=n;i>=0;i--)
#define s1   string
#define p_b  push_back
#define st   sort(a,a+n)
#define sts  sort(s.begin(),s.end())
#define stv  sort(v.begin(),v.end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())



int main()
{

  ll t ;cin>>t; while(t--)
  {
    lg  n,k,i,c=0;cin>>n>>k; lg a[n]; f cin>>a[i];
    if(k>1)
    {
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]+a[i+1])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
   else 
   {
       cout<<(n-1)/2<<endl;
   }
  }

   return 0;
}