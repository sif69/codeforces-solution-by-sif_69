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

ll lo(ll n)
{
  return floor(log10(n) + 1);
}


ll binarySearch(ll arr[], ll p, ll r, ll num) {
   if (p <= r) {
      ll mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}

ll dig(ll n)
{
   ll j=0;
   while(n>0)
   {
      n/=10;
      j++;
   }
   return j; 
}





void Solve()
{
 
    map<ll,ll>mp; 
    map<char,ll>mp1; 
    vector<ll>v,v1;
    
    ll i,c=0,flag=0,slag=0,n;
    
   
    cin>>n; 
    s1 s;
    cin>>s; 
    
    for(i=0;i<s.size();i++)
    {
        mp1[s[i]]++; 
    }
    
    ll w,x,y,z; 
    
    if(n==1)
    {
        cout<<1<<endl;
        cout<<s<<endl; 
    }
    
    else if(n>1)
    {
        
    for(i=0;i<s.size();i++)
    {
        if(!isPrime(s[i]-'0'))
        {
            cout<<1<<endl;
            cout<<s[i]<<endl;
            flag=1; 
            break; 
        }
    }
    
    }
    
    if(!flag)
    { 
         ll f1,f2,f3,f4; 
         
         w=mp1['2'],x=mp1['3'],y=mp1['5'],z=mp1['7'];
       
        if(s.size()==2)
         {
             cout<<2<<endl; 
             cout<<s<<endl; 
         }
         
         else if(s.size()==3)
         {
            
             f1=s[0]-'0',f2=s[1]-'0',f3=s[2]-'0'; 
             cout<<2<<endl; 
             if(!isPrime(f1*10+f2))
             {
                 cout<<f1*10+f2<<endl; 
             }
             else if(!isPrime(f1*10+f3))
             {
                 cout<<f1*10+f3<<endl; 
             }
             else if(!isPrime(f2*10+f3))
             {
                 cout<<f2*10+f3<<endl; 
             }
         }
         
         else if(s.size()==4)
         {
               f1=s[0]-'0',f2=s[1]-'0',f3=s[2]-'0',f4=s[3]-'0'; 
               
                cout<<2<<endl;
                
            if(!isPrime(f1*10+f2))
             {
                cout<<f1*10+f2<<endl; 
             }
             else if(!isPrime(f1*10+f3))
             {
                 cout<<f1*10+f3<<endl; 
             }
             else if(!isPrime(f2*10+f3))
             {
                 cout<<f2*10+f3<<endl; 
             }
             else if(!isPrime(f1*10+f4))
             {
                 cout<<f1*10+f4<<endl; 
             }
             else if(!isPrime(f2*10+f4))
             {
                 cout<<f2*10+f4<<endl; 
             }
             else
             {
                 cout<<f3*10+f4<<endl; 
             }
             
         }
         
        if(n>4)
        {
            
        if(w>=2) 
        {cout<<2<<endl; cout<<22<<endl; }
        else if(x>=2) {cout<<2<<endl; cout<<33<<endl;} 
        else if(y>=2) {cout<<2<<endl; cout<<55<<endl;} 
        else if(z>=2) {cout<<2<<endl; cout<<77<<endl;} 
        
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
