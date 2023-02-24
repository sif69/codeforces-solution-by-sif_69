#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define p_b push_back
#define s1 string 
#define sz 100000
vector<ll>v; 

void j()
{
    for(ll i=1;i<=sz;i++)
    {
        ll track=(i*(3*i+1))/2; 
        v.p_b(track); 
    }
}

ll bin_search(ll x)
{
    ll lo=0,hi=v.size()-1,mid;
    while(lo<=hi)
    {
        mid = (lo + hi) >> 1; 
        if(x<v[mid])
        {
            hi=mid-1;
        }
        else if(x==v[mid])
        {
            return mid; 
        }
        else
        {
            lo=mid+1;
        }
    }
    return hi; 

}

int main()
{
    j(); 
    ll t,i; cin>>t; 
    while(t--)
    {
         ll n,c=0; cin>>n;
         map<ll,ll>mp;  
         while(n>=2)
         {
            ll res=bin_search(n); 
           
            res=v[res]; 

             mp[res]++;
             if(n<7)
             {
                c+=(n/2); 
                break; 
             }
            if(mp[res]>1)
            {
               res=v[--res]; 
               
            }
           
            ++c; 
            //cout<<res<<" "<<n<<endl; 
            n-=res; 

         }
         cout<<c<<endl; 

    }
}