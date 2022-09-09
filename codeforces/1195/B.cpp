#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   ll n,k,i,p; cin>>n>>k; 
   
   ll a,b,c;
   a=1,b=3,c=-2*(n+k);
   float  x1, x2, discriminant, realPart, imaginaryPart;
   
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        
    }
    
    else if (discriminant == 0) {
        
        x1 = -b/(2*a);
        
    }

    // else {
    //     realPart = -b/(2*a);
    //     imaginaryPart =sqrt(-discriminant)/(2*a);
    //     cout << "Roots are complex and different."  << endl;
    //     cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    //     cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    // }
   ll m=max(x1,x2);
   cout<<n-m<<endl;
   return 0;
}