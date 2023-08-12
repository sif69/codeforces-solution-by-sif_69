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


 

void Solve()
{
              
                ll  i , j , c=0,flag=0;      

                ll m;  cin >> m; 
                vector<vector<ll>>v;
                while(m--) {
                    ll n;  cin >> n; 
                    vector<ll>v1;
                    ll a[n];
                    fi(i,0,n-1) {
                         cin >> a[i];
                         v1.p_b(a[i]);
                    }
                    srt(v1);
                    v.p_b(v1);


                }
                ll mx=1e12;
                for(i=0;i<v.size();i++){
                   if(v[i][0]<=mx){
                    mx=v[i][0];

                    flag=i;
                   }

                }
              ll mn=1e12;
                for(i=0;i<v.size();i++){
                   
                        c+=v[i][1];
                        mn=min(mn,v[i][1]);
                    
                }
                c-=mn;
               if(v.size()==1) {
                 cout << v[0][0] << pp;
               }
               else {
                 cout << c+mx<< pp;
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
              