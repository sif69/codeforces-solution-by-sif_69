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
       ll i,j,c=0,flag=0,n;
       cin>>n; ll a[n];
       vector<ll>v;
       if(n==1)
       {
           cout<<1<<endl;
       }
       if(n==3)
       {
           cout<<"2"<<" "<<"1"<<" "<<"3";
           cout<<endl;
       }

       else if(n==5)
       {

           for(i=1;i<=5;i++)
           {
               cout<<i<<" ";
           }
           cout<<endl;
       }
       else if(n%2==0)
       {
           ll k=(n-2);
           for(i=1;i<=k;i+=2)
           {
               cout<<i+1<<" "<<i<<" ";
           }
           cout<<(n-1)<<" "<<n<<endl;
       }
       else if(n%2!=0 && n>1)
       {
           cout<<n-2<<" ";
           ll p=n-3;
           for(i=1;i<=p;i+=2)
           {
               cout<<i+1<<" "<<i<<" ";
           }
           cout<<n-1<<" "<<n<<endl;
       }

   }
   return 0;
}

