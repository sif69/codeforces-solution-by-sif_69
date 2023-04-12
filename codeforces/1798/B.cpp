
#include<bits/stdc++.h>
using namespace std;

#define ll       long long
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
       ll i,c,j,flag=0,m; 
       cin>>m; 
       vector<vector<ll> >v; 
       for(i=0;i<m;i++)
       {
         vector<ll>ju;
         ll n,x; cin>>n; 
         for(j=0;j<n;j++)
         {
            cin>>x;
            ju.p_b(x);
         }
         v.p_b(ju); 

       }
       reverse(v.begin(),v.end()); 
       // vector<vector<ll>>ans();
       vector<vector<ll>>ans; 
       
       map<ll,ll>mp;
       for(i=0;i<v.size();i++)
       {
        c=0;
         ans.p_b(vector<ll>()); 
         for(j=0;j<v[i].size();j++)
         {
          
            if(!mp[v[i][j]])
            {
                ans[i].p_b(v[i][j]); 
                
                mp[v[i][j]]++; 
                c++; 


            }
         }
         if(c==0)
         {
           flag=1;
           break;
         }
        
       }
       if(!flag)
       {
        revs(ans); 
        for(i=0;i<ans.size();i++)
        {
            cout<<ans[i][0]<<" ";
        }
        cout<<endl;

       }
       else
       {
        cout<<-1<<endl;
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
              