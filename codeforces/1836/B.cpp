// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ll t;
    cin>>t;
    while (t--){
        ll n,k,g;
        cin>>n>>k>>g;
        ll p=(g+1)/2;
        ll res=(n-1)*(p-1);
        if(res>=k*g){
            cout<<k*g<<endl;
        }
        else {
            ll rem=k*g-res;
             ll d;
            ll r=rem%g;
            if(r>=p){
                d=rem-r+g;
            }
            else{
                d=rem-r;
            }
            cout<<res+(rem-d)<<endl;
        }
        
        
        
        
    }

    return 0;
}