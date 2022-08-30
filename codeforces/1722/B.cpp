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
    ll i,c=0,n; 
    cin>>n; 
    s1 s; s1 j; cin>>s; cin>>j; 
    for(i=0;i<n; i++)
    {
        if(s[i]=='R' && j[i]=='B'|| s[i]=='R' && j[i]=='G'||j[i]=='R' && s[i]=='B'|| j[i]=='R' && s[i]=='G')
        {
            c=1;
            break; 
        }
    }
    if(c) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   }
   return 0;
}
        