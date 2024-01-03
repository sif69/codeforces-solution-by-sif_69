#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define p_b push_back
#define pp endl
#define s1 string


int main() {
            
            ll n; cin>>n;
            ll a[n];
            ll i,j;
            ll sum=0;
            ll flag=0;
            map<ll,ll>mp,mp1;
            for(i=0;i<n;i++) {

                cin>>a[i];
                sum+=a[i];
                mp[a[i]]++;

            }
            ll half_sum = sum/2;

            
                ll pum=0,track;
                for(i=0;i<n;i++) {

                    pum+=a[i];
                    mp[a[i]]--;
                    mp1[a[i]]++;

                    if(pum<sum-pum){
                        track = half_sum-pum;
                      
                       if(mp[track]){
                        flag=1;
                        break;
                       }
                    }
                    else if (pum>sum-pum){
                        track = pum - half_sum;
                       if(mp1[track]){
                        flag=1;
                        break;
                       }
                    }
                    else{
                        flag=1;
                        break;
                    }


                }
              // cout<<sum<<" "<<flag<<pp;
          
           if (!flag||sum%2) 
            cout<<"NO"<<pp;
           else 
           cout<<"YES"<<pp;


      
    
}