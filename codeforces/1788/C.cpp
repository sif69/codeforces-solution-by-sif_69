#include<bits/stdc++.h>
using namespace std;

#define ll      unsigned long long
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
vector<unsigned long long >v,v1; 

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


//  binarySearch(ll arr[], ll lo, ll hi, ll find) {
   
//    ll mid; 
//           while(hi-lo>1)
//           {
//                 mid=(hi+lo)/2;
//                 if(a[mid]<find && a[mid-1]>a[mid] )
//                 {
//     ll              lo=mid+1; 
//                 }
//                 else if(a[mid]<find && a[mid-1]<a[mid]||a[mid]>find)
//                 {
//                   hi=mid-1;
//                 }
//                 else if(a[mid]<find && a[mid-1]>a[mid])
//                 {
//                   lo=mid+1; 
//                 }


//           }
//           return max(x-a[lo],x-a[hi]); 
// }

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
 
 ll i,c=0,flag=0,n;
 cin>>n; 
 ll a[n]; 
 map<ll,ll>mp; 
 i=0; 
 if(n%2==0) cout<<"No"<<endl; 
 else if(n==1) {cout<<"Yes"<<endl; cout<<1<<" "<<2<<endl;}
 else
 {
   cout<<"Yes"<<endl ;
   ll k=(n/2)-1;
   ll p=(n*2)-k; 
   ll j=p-1; 
   
   ll m=1; 
   while(p<=n*2)
   {
      cout<<m<<" "<<p<<endl; 
      m++; p++; 
   }
   while(n>=m)
   {
      cout<<n<<" "<<j<<endl; 
      n--; j--; 
   }
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