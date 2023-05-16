#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define lg     long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique( v.begin(),v.end()),v.end())
#define puni v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo    cout<<"YES"<<endl
#define  no    cout<<"NO"<<endl
#define M 1000000007
#define pp endl

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
            ll i,c=0,flag=0,j,n,sum=0,cnt=0;

            cin>>n; 
            ll a[2*n]; 
            vector<ll>v,v1,v2;
            vector<pair<ll,ll>>ans;
          
          
           ll vis[2*n];
           memset(vis,0,sizeof(vis));
           for(i=0;i<2*n;i++)
           {
             cin>>a[i];
             if(a[i]%2) v.p_b(i);
             else v1.p_b(i);
           }
           if(v.size()%2) v.pop_back();
           if(v1.size()%2) v1.pop_back();
           for(i=0;i<v.size();i+=2)
           {
              ans.p_b({v[i]+1,v[i+1]+1});
           }
            for(i=0;i<v1.size();i+=2)
           {
              ans.p_b({v1[i]+1,v1[i+1]+1});
           }
           for(auto x:ans)
           {
            cnt++;
            if(cnt>n-1) break;
            cout<<x.first<<" "<<x.second<<pp;
           }

          
          

           
          
          

        
            
  // transform(s.begin(), s.end(), s.begin(), ::tolower);
           

           
              


          
        
         
                                
}

int main()
{
    ios::sync_with_stdio(false);
        cin.tie(0);

        int tt=1;
        // jo();
        

        cin>>tt;

        while(tt--)
        {

            Solve();
        }

        return 0;
}