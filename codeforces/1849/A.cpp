#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; 
    while(t--){
        int b,c,h; 
        cin>>b>>c>>h;
        int d=c+h;
        if(b<=d){
            cout<<2*b-1<<endl;
        }
        else{
            cout<<2*d+1<<endl;
        }
    }
}