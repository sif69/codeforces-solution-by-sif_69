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

   

     ll i,c=0,cnt=0,flag=0,j,n,sum=0;
     cin>>n; 
     ll a[n+1],b[n+1];
     for(i=1;i<=n;i++){
        cin>>a[i];
     }
     vector<ll>v;
     for(i=n;i>=1;i--){
        v.p_b(a[i]);
     }
     ll csum[n+1],cpum[n+1];
     csum[1]=a[1];
     cpum[1]=v[0];
     for(i=2;i<=n;i++){
        csum[i]=csum[i-1]+a[i];
     }
     for(i=2;i<=n;i++){
        cpum[i]=cpum[i-1]+v[i-1];
     }
     // for(i=1;i<=n;i++){
     //    cout<<csum[i]<<" ";
     // }
     // cout<<pp;
     // for(i=1;i<=n;i++){
     //    cout<<cpum[i]<<" ";
     // }
     // cout<<pp;
    map<ll,ll>mp;
     for(i=1;i<=n;i++){
        mp.insert({csum[i],i});
     }
     ll l,r,k;
     for(i=1;i<=n;i++){
         l=cpum[i];
         r=mp[l];
         if(r>=1){
            if(r+i<=n){
                sum=r+i;
            }
         }
     }
   cout<<sum<<pp;
    


     
    


       
          


         
            
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