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
    ll i,c=0,n,m,p1,p2,d;
    cin>>n; cin>>m; cin>>p1; cin>>p2; cin>>d;
    if(fabs(p1-1)>d &&  fabs(p2-m)>d)
    {
        cout<<n+m-2<<endl;
    }
    else if(fabs(p1-n)>d && fabs(p2-1)>d )
    {
        cout<<n+m-2<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
   }
   return 0;
}
        