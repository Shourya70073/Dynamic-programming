#include<iostream>
using namespace std;
int knap(int wt[],int v[],int n,int w){
    if(w==0 || n==0)
      return 0;
    int a=-1;int b=-1;
    if(wt[n-1]<=w){
       a=v[n-1]+knap(wt,v,n-1,w-wt[n-1]);
       b=knap(wt,v,n-1,w);
       return max(a,b);
    }
    else{
        return knap(wt,v,n-1,w);
    }
}
int main(){
  int wt[]={10,3,2,5,20,5,6,7,8,9,1,3,2,6,5,4,10,3,2,5,20,5,6,7,8,9,1,3,2,6,5,4};
    int v[]={5,7,3,0,8,9,10,11,34,56,78,45,13,45,667,78,5,7,3,0,8,9,10,11,34,56,78,45,13,45,667,78};

     cout<<knap(wt,v,33,209);
    return 0;
}