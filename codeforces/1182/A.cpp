#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
int main()
{
   ll n;
  cin>>n; 
  
  if(n%2!=0)cout<<0<<endl;
  else cout<<(ll)pow(2,n/2)<<endl;
       
  
   return 0;
}