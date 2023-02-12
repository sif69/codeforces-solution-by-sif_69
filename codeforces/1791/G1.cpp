#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#define ll long long
#define p_b push_back
#define s1 string
#define sz 100000
using namespace std; 

int main()
{
     ll t; cin>>t; 
     ll j; 
     
    
    for(j=1;j<=t;j++)
     {
         
        ll i,c=0,flag=0,n,k;
         cin>>n>>k; 
        map<ll,ll>mp; 
        ll a[n+1]; 
        vector<ll>v; 
        for(i=0;i<n;i++)
        {
          cin>>a[i]; 
          v.p_b(a[i]+i+1); 
        }
       ll  mx=0;
        sort(v.begin(),v.end()); 
        for(i=0;i<n;i++)
        {
           k-=v[i]; 
           if(k>=0) mx=max(mx,i+1); 
        }
        cout<<mx<<endl;
        
       

        
         

     }
     
}