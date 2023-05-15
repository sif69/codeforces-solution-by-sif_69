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
            ll a,b,x,y; cin>>a>>b>>x>>y>>n; 
            ll ans,ans1,ok=0;
          
           ll p=2;
           ll a1,b1,x1,y1,n1;
           a1=a,b1=b,x1=x,y1=y,n1=n; 
           while(p)
           {
            if(ok)
            {

            if(b-n<=y)
                {
                    n-=abs(b-y); 
                  b=y;

                }
                else
                {
                    b-=n;
                    n=0;
                }
                ok=0;
            }
            else
            {
            if(a-n<=x) 
            {
                n-=abs(a-x); 
                a=x; 
            }
            else
            {
                a-=n;
                n=0;
            }
            ok=1;
        }
            p--;
        }

       ok=1;
       p=2;
        while(p)
           {
            if(ok)
            {

            if(b1-n1<=y1)
                {
                    n1-=abs(b1-y1); 
                  b1=y1;

                }
                else
                {
                    b1-=n1;
                    n1=0;
                }
                ok=0;
            }
            else
            {
            if(a1-n1<=x1) 
            {
                n1-=abs(a1-x1); 
                a1=x1; 
            }
            else
            {
                a1-=n1;
                n1=0;
            }
            ok=1;
        }
            p--;
        }
        cout<<min(a*b,a1*b1)<<pp; 


       
           
           
         
        
                    

           
         
         



           

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