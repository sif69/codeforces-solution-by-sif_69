#include<bits/stdc++.h>
using namespace std;

#define  ll       long long
#define  lg        long long
#define  fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define  fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define  s1        string
#define  p_b       push_back
#define  st(n)     sort(a,a+n)
#define  rev       reverse(a,a+n)
#define  revs(j)   reverse((j).begin(),(j).end())
#define  srt(k)    sort((k).begin(),(k).end())
#define  suni      s.erase(unique(s.begin(),s.end()),s.end())
#define  vuni      v.erase(unique( v.begin(),v.end()),v.end())
#define  puni      v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo       cout<<"YES"<<endl
#define  no       cout<<"NO"<<endl
#define  M        1000000007
#define  pie       acos(-1.0)
#define  pp        endl 
#define  sz        200000


ll ans(ll n,ll m) {

    ll q=n-m;
    ll p= (q*(q+1)*(2*q+1)) / 6;

    ll mx=-1;
    ll d=q+1;
    ll i;
    // 10 1 
    ll sum=0;
    ll k=n;
    for(i=d;i<=n;i++) {
        
        sum+=(i*k);
        mx=max(mx,i*k);
        k--;
       
    }
   
  return p+sum-mx;

}

 

void Solve()
{
              
                ll  i , j , c=0,flag=0;   

                ll n; cin >> n;

                if(n==2) {
                    cout << 2 << pp;
                    return ;
                }

              

                ll mn=-1;
                for(i=1;i<=n-1;i++){

                   
                        mn=max(mn,ans(n,i));

                        
                }
           

                cout << mn << pp;

          
               


              

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
              