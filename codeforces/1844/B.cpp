#include<bits/stdc++.h>
using namespace std;

#define  ll        long long
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

          ll i,j,cnt=0,flag=0,c=0;
          ll n;
          cin>>n; 
          ll  k=n/2;
          if(n==1){
            cout<<1<<pp;
            return;
          }
          else if(n==2){
            cout<<1<<" "<<2<<pp;
            return;
          }
         vector<ll>v;
         v.p_b(3);
         for(i=n;i>3;i--){
            v.p_b(i);
         }
         v.p_b(1);
         v.p_b(2);
         swap(v[n-2],v[(n/2)]);
         for(auto it:v){
            cout<<it<<" ";
         }
         cout<<pp;
             



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
              