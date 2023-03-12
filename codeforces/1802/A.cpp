#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define p_b push_back

int main()
{

    ll t; cin>>t; 
    while(t--)
    {
        ll n,pos_cnt=0,neg_cnt=0; 
        cin>>n; 
         ll a[n],i; 
         for(i=0;i<n;i++)
         {
            cin>>a[i]; 
            if(a[i]>0) pos_cnt++; 
            else neg_cnt++; 
         }
         ll p=pos_cnt; 
         for(i=1;i<=pos_cnt;i++)
         {
            cout<<i<<" "; 
         }
         for(i=1;i<=neg_cnt;i++)
         {
               pos_cnt--; 
               cout<<pos_cnt<<" "; 
         }
         cout<<endl; 
         for(i=1;i<=neg_cnt;i++)
         {
            cout<<1<<" "<<0<<" ";
         }
         for(i=1;i<=n-2*neg_cnt;i++)
         {
            cout<<i<<" ";
         }
         cout<<endl; 
    }
}