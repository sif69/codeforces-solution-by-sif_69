#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define s1 string 
#define p_b push_back
#define sz 10000000

int main()
{
    ll t; cin>>t; 
    while(t--)
    {
        ll n,i; cin>>n;
        ll k=2*n-2; 
        s1 s,p; 
        vector<s1>v,v1; 
        for(i=0;i<k;i++)
        {
            cin>>s; 
            v.p_b(s);
        }
        for(i=0;i<k;i++)
        {
            if(v[i].size()==n-1)
            {
                v1.p_b(v[i]); 
            }

        }
         s=v1[0]; 
         p=v1[1]; 
       
        reverse(p.begin(),p.end()); 
        if(s==p)
        {
            cout<<"Yes"<<endl; 
        }
        else
        {
            cout<<"No"<<endl; 
        }



    }
}