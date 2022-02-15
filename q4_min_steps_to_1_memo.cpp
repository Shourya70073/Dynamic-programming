#include<iostream>
using namespace std;
int min_steps_to_1(int n,int a[]){
    if(n==1){
        a[n]=0;
         return 0;
    }
       
    int x=INT16_MAX;
    int y=INT16_MAX;
    
    if(n%3==0){
      if( a[n/3]==-1) {
        a[n/3]=min_steps_to_1(n/3,a);
    }
    x=a[n/3];
    }
    if(n%2==0){
         if(a[n/2]==-1)
            a[n/2]=min_steps_to_1(n/2,a);
      y=a[n/2];
    
    }
    
     
    if(a[n-1]==-1){
      a[n-1]=min_steps_to_1(n-1,a);
    }
    a[n]= min(min(x,y),a[n-1])+1;
    return a[n];
}
int main(){
    int a[11];
    for(int i=0;i<11;i++){
      a[i]=-1;
    }
    cout<<min_steps_to_1(10,a);
    return 0;
}