#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while(t--) {
        int a,b; cin>>a>>b;
        if(b%a==0) cout<<(b/a)*b<<endl;
        else cout<<(b/__gcd(a,b))*a<<endl;
    }
}