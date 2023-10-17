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

typedef pair<int, int> pi;


void Solve()
{
              
        
            ll i,j,flag=0,c=0,n,l1,R1,cnt=0;
            
            cin >> n;

            ll sum=0,mx=0;

            ll a[n]; 
            fi(i,0,n-1){
               
               cin >> a[i];

               sum+=a[i];
               
               if(a[i]%2==0) {
                  c=0;
                  while(a[i]%2!=1){
                    a[i]/=2;
                    c++;
                  }
                  cnt+=c;
                
               }
               if(a[i]%2){
                   mx=max(mx,a[i]);
               }

            }

           
            ll pum=0;
            for(i=0;i<n;i++){
                 pum+=a[i];
            }
            pum-=mx;
            // cout << cnt <<pp;
            pum+=(mx*pow(2,cnt));

            cout << max(pum,sum) << pp;


          

      


        
             
        
         
         

          

 
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
              