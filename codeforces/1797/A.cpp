
#include<bits/stdc++.h>
using namespace std;

#define ll      unsigned long long
#define lg      long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)  sort((k).begin(),(k).end())
#define suni    s.erase(unique(s.begin(),s.end()),s.end())
#define vuni    v.erase(unique( v.begin(),v.end()),v.end())
#define puni    v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo     cout<<"YES"<<endl
#define  no     cout<<"NO"<<endl
#define  M      1000000007
#define pie acos(-1.0)
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


      ll i,j=0,n,m,flag=0; 
      vector<ll>v; 
      cin>>n>>m; 
      ll cnt1=0,cnt2=0; 
      ll x1,y1,x2,y2; 
      cin>>x1>>y1>>x2>>y2;
     
      if(y1+1<=m) cnt1++; 
      if(y1-1>=1) cnt1++; 
      if(x1-1>=1) cnt1++; 
      if(x1+1<=n) cnt1++; 
      if(y2+1<=m) cnt2++; 
      if(y2-1>=1) cnt2++; 
      if(x2-1>=1) cnt2++; 
      if(x2+1<=n) cnt2++; 
      cout<<min(cnt1,cnt2)<<endl; 


           

         
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