#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define lg       long long
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
#define pp endl
#define gg greater<ll>()




void Solve()
{

   

        ll i,cnt=0,flag=0,j,n,sum=0,c=0;
       cin>>n; 
       ll a=0,b=0,d=0;
       while(n--){
         ll x,y; cin>>x>>y;
         if(x<0) a=min(a,min(x,y));
         else if(y<0) b=min(b,min(x,y));
         else if(x>0) c=max(c,max(x,y));
         else d=max(d,max(x,y));
       
           
         
       }
     vector<ll>v;
     v.p_b(abs(a)); v.p_b(abs(b)); v.p_b(abs(c)); v.p_b(abs(d));
     srt(v); 
     cout<<(v[0]*2+v[1])+(v[1]+v[2])+(v[2]+v[3])+v[3]<<pp;
     



        
      

        
        
      
       
       
       
   
   

     
    
     
 
    


            
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