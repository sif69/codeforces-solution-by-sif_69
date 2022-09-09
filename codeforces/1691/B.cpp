#include<bits/stdc++.h>
using namespace std;

#define ll    unsigned long long 
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







int main( )
{
    ll t; 
    cin>>t; 
   
    while(t--)
    {
          
         ll n,i,c=0,m; cin>>n;
         vector<ll>v;
         vector<ll>v1;
         ll a[n];
         fi(i,0,n-1)
         {
             cin>>a[i];
             
             
         }
         fi(i,0,n-1)
         {
             v.p_b(a[i]);
         }
          for(i=1;i<=n;i++)
          {
              v1.p_b(i);
          }
        vuni;
        if(n==1)
        {
            cout<<-1<<endl;
        }
         
         if(v.size()==1 && n>1)
         {
             cout<<n<<" ";
             for(i=1;i<n;i++)
             {
                 cout<<i<<" ";
             }
             cout<<endl;
         }
          else if(v.size()!=1 && n>1)
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                {
                   swap(v1[i],v1[i+1]);
                }
            }
            
            for(i=0;i<v1.size();i++)
            {
                if(v1[i]==(i+1))
                {
                  c=1;
                    break;
                }
                
            }
             if(c==1)
              {
                  cout<<-1<<endl;
              }
               else
              {
                  for(i=0;i<v1.size();i++)
                 {
                     cout<<v1[i]<<" ";
                 }
                 cout<<endl;
              }
       }
         
      
        
        
        
    }
       
  
    
         
      
      
    
    
    
   return 0;
}
