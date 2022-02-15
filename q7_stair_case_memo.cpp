#include<iostream>
using namespace std;
int stair(int n,int a[]){
    if(n==0){
        return 0;
    }
    int x=INT16_MAX;
    int y=INT16_MAX;
    int z=INT16_MAX;
    if(n-1>=0){
         if(a[n-1]==-1)
            a[n-1]=stair(n-1,a);
        x=a[n-1];
    }
    if(n-2>=0){
         if(a[n-2]==-1)
            a[n-2]=stair(n-2,a);
        y=a[n-2];
    }
    if(n-3>=0){
         if(a[n-3]==-1)
            a[n-3]=stair(n-3,a);
        z=a[n-3];
    }
    a[n]=min(x,min(y,z))+1;
    return a[n];
}
int main(){
    int a[5];
    for(int i=0;i<=4;i++){
        a[i]=-1;
    }
       cout<<stair(4,a)<<endl;;
    return 0;
}