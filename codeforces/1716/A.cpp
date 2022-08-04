
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin>>t; while(t--)
    {

        ll i,c=0,d=0,n,flag=0; cin>>n;
         ll p=n;
         if(n==1) cout<<2<<endl;
         else
         {
              if(n%3==0) cout<<n/3<<endl;
              else
              {
                  cout<<(n/3)+1<<endl;
              }

         }

    }

     return 0;
}
