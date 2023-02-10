#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main()
{
     ll t; cin>>t; 
     while(t--)
     {
          ll n,k,c=0; cin>>n>>k; 
           ll sum=1; 
           while(sum<k)
           {
               sum*=2; 
               c++; 
           }
           if(sum<n) c+=(n-sum+k-1)/k; 
           cout<<c<<endl;
     }
}