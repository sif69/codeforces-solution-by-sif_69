#include<bits/stdc++.h>
using namespace std;
 
#define ll     long long 
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
#define vuni v.erase(unique(v.begin(),v.end()),v.end())

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

ll lo(ll n)
{
  return floor(log10(n) + 1);
}


    
void Solve()
{
   
    
     ll n, x, s, q;
        cin >> n >> x >> s >> q;
        vector <ll> a(n);
        a[0] = x * s;
        q -= x * s;
        if (q < 0) cout << "-1\n";
        else {
            for (ll i = 0; i < n; ++i) {
                ll now = min(x - 1, q);
                a[i] += now;
                q -= now;
            }
            if (q > 0) cout << "-1\n";
            else {
                for (ll i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
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
        