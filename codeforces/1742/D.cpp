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
#define vuni v.erase(unique( v.begin(),v.end()),v.end())
#define puni v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo    cout<<"YES"<<endl
#define  no    cout<<"NO"<<endl
 

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

ll lo(ll n)
{
  return floor(log10(n) + 1);
}


ll binarySearch(ll arr[], ll p, ll r, ll num) {
   if (p <= r) {
      ll mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
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








void Solve()
{
   vector<ll>v,v1; 
   map<ll,ll>mp,mp1; 
   ll i,c=0,flag=0,mx=-1,mn=1000000000,n,d=0,j;
   cin>>n; 
   ll a[n];
    for(i=1;i<=n;i++)
   {
      cin>>a[i]; 
   }
   ll g=__gcd(a[1],a[2]);
   for(i=3;i<=n;i++)
   {
      g=__gcd(g,a[i]); 
   }

   for(i=n;i>0;i--)
   {
       if(mp[a[i]]==0)
       {
         mp[a[i]]++; 
         v.p_b(i); 
       }
   }
   for(i=0;i<v.size();i++)
   {
      for(j=i;j<v.size();j++)
      {
         ll k; 
          if(__gcd(a[v[i]],a[v[j]])==1)
          {
            k=v[i]+v[j];
             mx=max(k,mx); 
          }

      }
   }


   if(g!=1) cout<<-1<<endl; 
   else
   {
      cout<<mx<<endl; 
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
