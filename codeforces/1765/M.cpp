#include<bits/stdc++.h>
using namespace std;

#define ll     long long
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
#define vuni v.erase(unique( v.begin(),v.end()),v.end())
#define puni v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo    cout<<"YES"<<endl
#define  no    cout<<"NO"<<endl
#define M 1000000007

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







  


// ll d1[]={-1,-1,-1,0,1,1,1,0};
// ll d2[]={0,-1,1,-1,0,1,-1,1};
    // return 




void Solve()
{
         
        ll i,c=0,j,flag=0,n,cnt=0;
        
       cin>>n; 
       ll mn=1e12;
       ll ans=0; 

       ll k=sqrt(n); 
       if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
       else if(n==3) cout<<1<<" "<<2<<endl;
       else
       {
        for(i=2;i<=k;i++)
        {
            if(n%i==0)
            {
                 ll l,r;
                 l=(n/i)-1;
                 l=l*i;
                 r=n-l;
                 ll momo=(l*r)/(__gcd(l,r)); 
                 if(momo<=mn)
                 {
                    mn=momo;
                    ans=l;
                    
                 }
                 ll p=n/i;
                 l=(n/p)-1;
                 l=l*p;
                 r=n-l;
                 momo=(l*r)/(__gcd(l,r)); 
                 if(momo<=mn)
                 {
                    mn=momo;
                    ans=l;
                    
                 }

            }
        }
        if(ans==0)
        {
            ans=1;
        }
        cout<<ans<<" "<<n-ans<<endl;


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
