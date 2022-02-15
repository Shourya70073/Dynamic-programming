#include<iostream>
using namespace std;
int stair(int n){
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        int dp1=INT16_MAX;
        int dp2=INT16_MAX;
        int dp3=INT16_MAX;
        if(i-1>=0){
            dp1=a[i-1];
        }
        if(i-2>=0){
            dp2=a[i-2];
        }
        if(i-3>=0){
            dp3=a[i-3];
        }
    a[i]=min(dp1,min(dp2,dp3))+1;
    }
    return a[n];
}
int main(){
    
       cout<<stair(10)<<endl;;
    return 0;
}