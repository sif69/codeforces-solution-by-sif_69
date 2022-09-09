#include<bits/stdc++.h>
using namespace std;
#define ll    signed long long
#define lg   long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1   string
#define p_b  push_back
#define st(n)   sort(a,a+n)
#define rev  reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())



int main( )
{
    ll t; 
    cin>>t; 
   
    while(t--)
    { 
          ll i,c=0,m=0,n,l=0; 
          s1 s; cin>>s; cin>>n; 
         string w(s);
        sort(w.rbegin(), w.rend());
         
    
        for(i=0;i<s.size();i++)
            c+= s[i] - 'a' + 1;
         
         
           
           map<char,int> del;
        for(i=0;i<w.size();i++)
            if (c > n) {
                del[w[i]]++;
                c -= w[i] - 'a' + 1;
            }
        for(i=0;i<s.size();i++) {
            if (del[s[i]] > 0) {
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }
         cout<<endl;
   }
    
    
   return 0;
}
