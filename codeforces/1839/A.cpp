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
#define Mod 1000000007
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
 



void Solve()
{
           ll i,j=0,c=0,flag=0,n,cnt=0,sum=0;

           ll k; cin>>n>>k;
           ll ans=0;
           vector<ll>v;
           ll pront=0,back=0;
           ll l=0,r=0,p;
           for(i=1;i<=n;i+=k){
              v.p_b(i);
             
           }
           if(v[v.size()-1]!=n) c++;
           cout<<v.size()+c<<pp;

          

          

         
    
           


           
            

              
           
           
            
          
           
           
          
          


          

       

          
            
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
