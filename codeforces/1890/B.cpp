#include<bits/stdc++.h>
using namespace std;

#define  ll       long long
#define  lg        long long
#define  fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define  fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define  s1        string
#define  p_b       push_back
#define  st(n)     sort(a,a+n)
#define  rev       reverse(a,a+n)
#define  revs(j)   reverse((j).begin(),(j).end())
#define  srt(k)    sort((k).begin(),(k).end())
#define  suni      s.erase(unique(s.begin(),s.end()),s.end())
#define  vuni      v.erase(unique( v.begin(),v.end()),v.end())
#define  puni      v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo       cout<<"YES"<<endl
#define  no       cout<<"NO"<<endl
#define  M        1000000007
#define  pie       acos(-1.0)
#define  pp        endl 
#define  sz        200000
#define m_p        make_pair

typedef pair<int, int> pi;



void Solve()
{
              
        
            ll i=0,j=0,k=0,c=0,flag=0,flag1=0,c1=0,c2=0,sum=0;
        
            ll n,m; 
            cin>>n; cin>>m;
            s1 s,t;

            cin>>s;
            cin>>t;
           


            for(i=0;i<n;i++){
                if(s[i]==s[i+1]) c1++;
            }
            for(i=0;i<m;i++){
                if(t[i]==t[i+1]) c2++;
            }
           
            if(n==1||c1==0){
                yo;
                return;
            }
            else if(c2>=1){
                no;
                return;
            }
            else{
                ll p,q;
                for(i=0;i<n-1;i++){

                        if(s[i]==s[i+1]){
                            p=s[i];
                            q=s[i+1];
                            if(p==t[0]||q==t[m-1]){
                                flag=1;
                                break;
                            }
                        }
                }
                if(flag) no;
                else yo;
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
              