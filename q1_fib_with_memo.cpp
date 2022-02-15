#include<iostream>
using namespace std;
int fib(int n,int c[]){
    if(n<=1){
        c[n]=n;
        return n;
    }
    if(c[n-1]==0){
         c[n-1]=fib(n-1,c);
    }
    if(c[n-2]==0){
        c[n-2]=fib(n-2,c);
    }
    return c[n-1]+c[n-2];
}
int main(){
    int n=5;
    int c[n+1];
    for(int i=0;i<=n;i++)
       c[i]=0;
    cout<<fib(n,c);
    return 0;
}
