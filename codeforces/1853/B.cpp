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
ll a[sz];
void da(){
         ll i;
          a[0]=0;
          a[1]=1;
          for(i=2;i<sz;i++){
            a[i]=a[i-2]+a[i-1];
          }
}




void Solve()
{

          ll j,cnt=0,flag=0,sum=0,c=0,i;

          ll n,k; 
          cin>>n>>k;
          ll x,y,z=n;
          if(k==3){
            cout<<n/2 +1 <<pp;
            return;
          }
          for(i=1;i<=n/2;i++){

               y=n-i;
               z=n;
               cnt=2;
              while(1){
                x=z-y;
                z=y;
                y=x;
                if(y>z||y<0){
                    break;
                }
                cnt++;

                if(cnt==k){
                    c++;
                    break;
                }
                

              }
             
              
          }
          cout<<c<<pp;

        
         


}


int main()
{ 

    ios::sync_with_stdio(false);
        cin.tie(0);


        int tt=1;

        da();
        

        cin>>tt;

        while(tt--)
        {
 
             Solve();

        }


        return 0;
}
              