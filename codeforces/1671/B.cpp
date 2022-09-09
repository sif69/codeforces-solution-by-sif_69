#include<bits/stdc++.h>
using namespace std;
 
#define ll      long long 
#define lg     long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
 
    
int main( )
{
    ll t; 
    cin>>t; 
   
   while(t--)
   {
       ll i,c=0,d=0,flag=1,n; 
       cin>>n; 
       map<int,int>mp;
       ll a[n];
       fi(i,0,n-1)
        {
            cin>>a[i];
            
        }
        for(i=0;i<n-1;i++)
        {
            d=a[i+1]-a[i];
            mp[d]++;
            if(d>3)
            {
                flag=0;
                break;
            }
        }
        //if(mp[4]>=1) flag=0;
         if(mp[2]>2||mp[3]>1)
         {
        flag=0;
             
         }
        else if(mp[2]!=0 && mp[3]!=0)
        {
            flag=0;
            
        }
        
        if(flag||n==1)
        {cout<<"YES"<<endl;}
        else
        {
            cout<<"NO"<<endl;
        }
   }
   return 0;
}
        