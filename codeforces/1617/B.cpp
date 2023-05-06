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
#define M 1000000007
#define pp endl

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


ll dig(ll n)
{
    ll c=0;
    while(n)
    {
        n/=10;
        c++;
    }
    return c;
}
// ll vis[1]
void Solve()
{
            ll i,c=0,flag=0,j,n,sum=0,cnt=0;
           vector<ll>v; 
           map<ll,ll>mp; 
           s1 s,p; 
          
           // transform(s.begin(), s.end(), s.begin(), ::tolower);
            cin>>n;
           ll l,r;
           if(n%2)
           {
            l=(n-1)/2+1;
            r=l-2;
             while(1)
             {
                if(__gcd(l,r)==1)
                {
                    cout<<l<<" "<<r<<" "<<1<<pp;
                    break;
                }
                r--;
                l++;

             }
           }
           else
           {
             l=(n/2);
             cout<<l-1<<" "<<l<<" "<<1<<pp;
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