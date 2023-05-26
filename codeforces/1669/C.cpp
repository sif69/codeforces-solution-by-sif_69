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
  
    ll a[n];
    fi(i,0,n-1){
        cin>>a[i]; 
    }
    vector<ll>v,v1;
    for(i=0;i<n;i++)
    {
        if((i+1)%2) v.p_b(a[i]);
        else v1.p_b(a[i]);
    }
    for(i=0;i<v.size()-1;i++){
        if(v[i]%2!=v[i+1]%2)
        {
            flag=1;
            break;
        }
    }
      for(i=0;i<v1.size()-1;i++){
        if(v1[i]%2!=v1[i+1]%2)
        {
            flag=1;
            break;
        }
    }
    if(flag) no;
    else yo;
           

       
          


         
            
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