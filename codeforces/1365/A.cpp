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
     ll m; cin>>n>>m;
     ll a[n+1][m+1];

     for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
     }
    
    set< ll > r, c1;
        for(i = 1; i <=n; i++)
        {
            for(j = 1; j <=m; j++)
            {
               
                if(a[i][j] == 1)
                    r.insert(i), c1.insert(j);
            }
        }
ll turn=min(n-r.size(),m-c1.size());

    if(turn%2) cout<<"Ashish"<<pp;
    else cout<<"Vivek"<<pp;
   
    

    
     
    
   
    


     
    


       
          


         
            
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