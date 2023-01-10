#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define s1 string 
#define p_b push_back


int main()
{
    ll t; cin>>t; 
    while(t--)
    {
        ll a,b,diff,c=0,i; 
        char ch; cin>>a>>ch>>b>>diff; 
        map<ll,ll>mp; 
        for(i=0;i<2023;i++)
        {
             
           
           
           
                if(a%10==b/10 && b%10==a/10)
                {
                     if(mp[a]==1)
                     {
                         break; 
                     }
                     c++; 
                     mp[a]++; 
                }
             a=(a+(diff/60)+(b+(diff%60))/60)%24; 
             b=(b+(diff%60))%60;   
            
        }
        cout<<c<<endl; 
    }
}