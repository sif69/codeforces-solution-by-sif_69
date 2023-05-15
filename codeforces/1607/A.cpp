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
           s1 s,p; 
           cin>>s;
           n=s.size();  
           map<char,ll>mp;
           for(i=0;i<n;i++)
           {
             mp.insert({s[i],i+1}); 
           }
           cin>>p; 
           for(i=0;i<p.size()-1;i++)
           {
            if(p[i]==p[i+1]) continue;
            else sum+=abs(mp[p[i]]-mp[p[i+1]]);
           }
           cout<<sum<<pp; 

       
           
           
         
        
                   

           
         
         



           

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