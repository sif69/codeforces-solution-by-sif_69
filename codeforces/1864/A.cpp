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
              
                ll  i , j , c=0, flag=0, sum=0, n;

               ll x, y ; cin >> x >> y >> n;

               vector<ll>v;
               v.p_b(x); v.p_b(y);

               c=1;
               ll z=y;
               for(i=1;i<n-1;i++){
                if(z-c>x)
                    
                    v.p_b(z-c);
                z=z-c;
                   c++;

               }
             srt(v);
               for(i=0;i<n-2;i++) {

                 if(v[i+1]-v[i]<=v[i+2]-v[i+1]) {
                    flag=1;
                    break;
                 }
               }
               if(flag||v.size()<n||v[0]!=x||v[n-1]!=y) cout << -1;
               else{
                for(auto x:v){
                    cout << x <<" ";
                }

               }
               cout << pp;

               
                

              
                


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
              