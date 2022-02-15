#include<iostream>
using namespace std;
int knap(int wt[],int v[],int n,int w,int b[][110]){
    if(w==0 || n==0)
      return 0;
    int a=-1;int c=-1;
   if(wt[0]<=w){
       if(b[n-1][w-wt[0]]==-1)
          b[n-1][w-wt[0]]=knap(wt+1,v+1,n-1,w-wt[0],b)+v[0];
        a=b[n-1][w-wt[0]];
        if(b[n-1][w]==-1)
          b[n-1][w]=knap(wt+1,v+1,n-1,w,b);
        c=b[n-1][w];
        b[n][w]=max(a,c);
        return b[n][w];
   }
   else{
       b[n-1][w]=knap(wt+1,v+1,n-1,w,b);
       return b[n-1][w];
   }
}
int main(){
    int wt[]={10,3,2,5,20,5,6,7,8,9,1,3,2,6,5,4};
    int v[]={5,7,3,0,8,9,10,11,34,56,78,45,13,45,667,78};
    int b[17][110];
    for(int i=0;i<=16;i++){
        for(int j=0;j<=109;j++){
            b[i][j]=-1;
        }
    }
    cout<<knap(wt,v,16,109,b);
    return 0;
}