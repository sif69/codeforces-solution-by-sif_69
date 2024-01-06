#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define p_b push_back
#define pp endl
#define s1 string





int main() {
      

              ll n; cin>>n;
           set<ll,greater<ll>>st;
              map<ll,ll>mp;
              ll k;
            while(n--) {

                ll x,y;


                cin >> x >> y;

               if(x==1){

                st.insert((1<<y));
                mp[(1<<y)] ++ ;

               }

               else{
                for(auto it:st){

                    k = (y)/it;
                   // cout<<it<<" "<<mp[it]<<pp;
                    y-=it*(min(k,mp[it]));

                }
                if(!y) cout<<"YES"<<pp;
                else cout<<"NO"<<pp;
                // cout<<y<<pp;

                 }
       }
  

}