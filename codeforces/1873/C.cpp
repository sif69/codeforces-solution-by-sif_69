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

typedef pair<int, int> pi;

void Solve()
{
              
                ll  i , j , flag=0, sum=0, n , k , x,c=0;
               
               char ch;

               for(i=1;i<=10;i++) {

                for (j=1;j<=10;j++) {

                    cin >> ch;
                    if(ch=='X'){
                        if(min(i,j)==1||max(i,j)==10) sum+=1;
                        else if(min(i,j)==2||max(i,j)==9)  sum+=2;
                        else if(min(i,j)==3||max(i,j)==8)  sum+=3;
                        else if(min(i,j)==4||max(i,j)==7)  sum+=4;
                        else if(min(i,j)==5||max(i,j)==6)  sum+=5;
                        

                    }
                }
               }

               cout << sum << pp;
               


        




               
                
           







                

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
              