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
#define vuni v.erase(unique( v.begin(),v.end()),v.end())
#define puni v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo    cout<<"YES"<<endl
#define  no    cout<<"NO"<<endl
#define M 1000000007

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







  


// ll d1[]={-1,-1,-1,0,1,1,1,0};
// ll d2[]={0,-1,1,-1,0,1,-1,1};



void Solve()
{
         
        ll i,c=0,j,flag=0,n,cnt=0;
        cin>>n; 
       
        s1 s,t; cin>>s;
        map<s1,ll>mp,mp1,mp2;
        for(i=0;i<n;i+=2)
        {
            t=s.substr(i,2); 
            // cout<<t<<endl;
            // cout<<i<<endl;
            mp[t]++; 
            if(mp[t]>1)
            {
                yo;
                flag=1;
                break;
                
            }
        }
        if(!flag)
        for(i=0;i<n-1;i++)
        {
            t=s.substr(i,2); 
            // cout<<t<<endl;
            mp2[t]++; 
            if(mp2[t]>1)
            {
                ll k=mp1[t];
                // cout<<k<<endl;
                if(k+1!=i)
                {
                    yo;
                   flag=1;
                   break;
                }
            }
            mp1.insert({t,i}); 

        }
        if(!flag)
        no;
    
     

  
        
       

       
           
        
       
        
        
      
       
            
      
           
              
          

          
          
          
         
         
        
       


   
      
           
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
