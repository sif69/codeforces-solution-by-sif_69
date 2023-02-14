#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define p_b push_back
int main()
{
   ll t; cin>>t; 
   while(t--)
   {
    ll a,b,i,x,flag=0; cin>>a>>b; 
   if(a>b)
   {
       swap(a,b); 
   }
    x=a+1;
    //cout<<a<<" "<<b<<endl; 
    vector<ll>v; 
    while(1)
    {
        if(flag==1 && a==x)
        {
            v.p_b(a); 
            break; 
        }
        else if(flag==1 && a!=x)
        {
            v.p_b(a);
            a--;
        }
        else if(a!=b)
        {
            
            v.p_b(a); 
            ++a;
        }
        else if(a==b)
        {
            flag=1; 
        }
    }
    
    cout<<v.size()<<endl; 
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; 
    }
    cout<<endl; 
   }
}