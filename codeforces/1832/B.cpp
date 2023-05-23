
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
#define pp endl
#define gg greater<ll>()
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

   /*Classical Sliding window algorithm problem*/

       ll i,c=0,cnt=0,flag=0,j,n,sum=0;
      
      ll k; cin>>n>>k; 
      ll a[n+1];
      for(i=1;i<=n;i++){
        cin>>a[i];
        
      }
      sort(a+1,a+n+1);
      
      ll csum[n+1];
      csum[1]=a[1]; 

      for(i=2;i<=n;i++){
        csum[i]=csum[i-1]+a[i]; 
      }


      ll p=n-k;
      ll l,r;
      i=1;
      ll ans=0;

     while(p<=n){

        if(i==1){
            ans=max(ans,csum[p++]);
           
        }
        else{
            l=csum[p++];
            r=csum[i-1];
            // cout<<l-r<<pp;
           
            ans=max(ans,l-r);
        }
        i+=2;
       
        // cout<<i<<" "<<p<<" "<<ans<<pp;

     }
     cout<<ans<<pp;
      


        
       

       
        
        

      
       
      
        

         
        


         
         
         
         

          
         
          

      
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