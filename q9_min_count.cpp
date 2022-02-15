#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int mincount(double n){
    if(n==1){
        return 1;
    }
    if(isPerfectSquare(n)){
        return 1;
    }
   int d;
   d= mincount(n-1);
   return d+1;
}
int main(){
    cout<<mincount(11.0)<<endl;;
    cout<<mincount(3.0)<<endl;
     cout<<mincount(5.0);
    return 0;
}