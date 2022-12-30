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
   /*
      3
      5 3
      5 1
      6 6

      5 1 2 3 4
      1 2 3 4 5
      3 2 4 1 6 5
   */
   vector<ll>v; 
   ll i,flag=0,c=0,n,k; cin>>n>>k; 
   ll p=n; 
   ll d=1;
   if(n==k)
   {
       for(i=1;i<=n;i++)
       {
           cout<<i<<" "; 
       }
       cout<<endl; 
   }
   else
   {
       while(1)
       {
           if(v.size()==n)
           {
               break; 
           }
          v.p_b(p);
          if(v.size()==n)
          {
              break; 
          }
          v.p_b(d); 
           p--; d++; 
       }
      for(i=0;i<v.size();i++)
      {
          cout<<v[i]<<" "; 
      }
      cout<<endl; 
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
