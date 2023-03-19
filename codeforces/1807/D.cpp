
#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define lg      long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)  sort((k).begin(),(k).end())
#define suni    s.erase(unique(s.begin(),s.end()),s.end())
#define vuni    v.erase(unique( v.begin(),v.end()),v.end())
#define puni    v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo     cout<<"YES"<<endl
#define  no     cout<<"NO"<<endl
#define  M      1000000007
#define pie acos(-1.0)
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    if(num==1) return flag=false;

    return flag;
}




void Solve()
{

            ll i,c=0,flag=0,j,n,b,d,q,sum=0;
           cin>>n>>q; 
           ll a[n]; fi(i,0,n-1)
           {
            cin>>a[i]; 
            sum+=a[i]; 
           }
           ll pre[n]; 
           pre[0]=a[0]; 
           for(i=1;i<n;i++)
           {
            pre[i]=pre[i-1]+a[i]; 
           }
           // s1 s; cin>>s; 
           // map<char,ll>mp;
           // for(i=0;i<n;i++)
           // {
           //   if(mp[s[i]]==0)

           //   {
           //      mp[s[i]]++; 
           //      c++; 
           //   }
           // }
           // if(c<=(n+1)/2 && c!=1 && n>2||c==n) yo; 
           // else no; 
           ll pum=sum; 
           while(q--)
           {
             ll l,r,k;
             pum=sum;  
             cin>>l>>r>>k; 

              ll jum; 
              if(l==r)
              {
                jum=a[r-1]; 
              } 
              else if(l==1)
              {
                jum=pre[r-1]; 
              }
              else 
              {
                 jum=pre[r-1]-pre[l-2];
              }
              pum-=jum; 
              pum+=(k*(r-l+1)); 
              if(pum%2!=0) yo; 
              else no; 
           }



      
      
          
          
         
       
        
       
        

         
        
         
          
            
          


   
      
           
}

int main()
{
    ios::sync_with_stdio(false);
        cin.tie(0);

        int tt=1;
        

        cin>>tt;

        while(tt--)
        {

            Solve();
        }

        return 0;
}