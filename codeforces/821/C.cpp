#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s1 string
#define pp endl
int main() {
    
    ll n; cin>>n;
    n  = 2*n;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    stack<ll>st;
    ll i,flag=0,c=0;
    s1 s; ll x;
    ll top=1;
    for(i=0;i<n;i++){
        
        cin>>s;
        if(s == "add"){
            cin>>x;
          
            st.push(x);
            pq.push(x);
        }
        else{
            if(!st.empty()){
           if(st.top()==top){
               
               st.pop();
              
           }
        
           else if(st.top()!=top) {
               
             
            c++;
               while(!st.empty()) st.pop();
           }
           
         
        }
        top++;
        }
       
        
    }
    cout<<c<<pp;
    
    
}