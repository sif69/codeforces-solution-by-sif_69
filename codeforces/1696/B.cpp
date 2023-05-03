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
             ll i,j,c=0,flag=0,cnt=0,n,k;
             cin>>n; 
             ll a[n]; 
             stack<ll>st;
             fi(i,0,n-1)
             {
                cin>>a[i]; 
                st.push(a[i]);
             } 
           
             while(!st.empty()&&st.size()>1)
             {
                ll l,r;
                l=st.top(); 
                st.pop(); 
                r=st.top(); 
                if(l>0&&r==0)
                {
                    c++;
                }
                // cout<<st.top()<<" ";
                // st.pop();

             }
             if(a[0]>0) c++;
            
           if(c==0) cout<<0<<endl;
           else if(c==1) cout<<1<<endl; 
           else cout<<2<<endl; 


                          
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
