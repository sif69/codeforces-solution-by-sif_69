#include<bits/stdc++.h>
using namespace std;
#define ll    long long 
#define lg     unsigned long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())
//#define mode 998244353
bool isP(ll n){
    bool flag=true;
    for(ll i = 2; i <= n / 2; i++) {
       if(n % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

//#define sz 1000
//vector<ll>adj[sz],cost[sz];

//ll graph[sz][sz];
int main()
{
   
//     int n, m, x, y, z;
//     cin >> n >> m;
//     for (int i =1; i<=m; i++)
//     {
//         cin >> x >> y >> z;
//         adj[x].push_back(y);
//         cost[x].push_back(z);
//     }
//     for (int i =1; i<=n; i++)
//     {
//         cout << i <<": ";
//         for (int j = 0; j<adj[i].size(); j++)
//             cout << adj[i][j]<<","<<cost[i][j]<< ",\n"[j==adj[i].size()-1] ;
//         if(adj[i].size()==0)cout << "\n";
//     }

// /**
// 10 9
// 1 2 5
// 1 3 3
// 6 4 1
// 6 5 5
// 4 3 2
// 5 3 1
// 7 8 9
// 8 9 3
// 10 3 100
// */
      ll t; cin>>t; while(t--)
      {
          ll i,c=0,n; cin>>n; 
          ll a[n];
          map<ll,ll>mp;
          fi(i,0,n-1) 
          {
              cin>>a[i];
              
          }
          reverse(a,a+n);
          fi(i,0,n-1)
          {
              mp[a[i]]++;
              if(mp[a[i]]>1)
              {
                  c=i;
                  break;
              }
          }
          
        if(c==0) cout<<c<<endl;
        else
        {
            c=c+1;
            cout<<n-(c-1)<<endl;
        }
         
      }
      
        
      

   
   return 0;
}