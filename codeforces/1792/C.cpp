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
 
/*bool isPrime(int num){
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

ll lo(ll n)
{
  return floor(log10(n) + 1);
}


ll dig(ll n)
{
   ll j=0;
   while(n>0)
   {
      n/=10;
      j++;
   }
   return j; 
}

ll Mod_jod(ll a,ll b,ll m)
{
  
   if(b==0)
   {
       return 1; 
   }

    ll ans= Mod_jod(a,b/2,m);
    // b&1 check odd number ...
    if(b&1)
    {
       return (a* (ans * ans) % m ) % m ;
    }
    else
    {
       return ( ans * ans ) % m ;
    }
}

ll jow(ll x,ll y)
{
   if(y==0)
   {
       return 1; 
   }

    ll dans= jow(x,y/2);
   
    if(y&1)
    {
       return x* (dans * dans) ;
    }
    else
    {
       return ( dans * dans )  ;
    }
}

ll divSum(ll num)
{
    
    ll res = 0;
    if(num == 1) 
      return res;
    
    for (ll i=2; i<=sqrt(num); i++)
    {
       
        if (num%i==0)
        {
           
            if (i==(num/i))
                res += i;
            else
                res += (i + num/i);
        }
    }
 
   
    return (res + 1);
}



*/
bool iP(vector<ll>&v,ll mid)
{
   ll f,l ;
   f=mid+1,l=v.size()-mid; set<ll>st; 
   for(auto& i:v)
   {
      if((i>f && i<=l) && !st.count(i-1)) return 0; 
      st.insert(i);
   }
   return 1; 

     

}

ll bin_search(vector<ll>&v,ll lo,ll hi)
{
     ll mid,ans=0;
      while(lo<=hi)
      {
          mid=(hi+lo)/2; 

          if(iP(v,mid))
          {
              ans=mid;
              hi=mid-1;
          }
          else
          {
            lo=mid+1;
          }
      }

     return ans;  
}
void Solve()
{
         ll i,c=0,flag=0,n; cin>>n; 
         vector<ll>v(n); 

         for(i=0;i<n;i++) cin>>v[i]; 

         ll lo=0,hi=(n+1)/2; 

         ll res=bin_search(v,lo,hi); 
         cout<<res<<endl ;


   


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