#include<iostream>
using namespace std;
int minsteps(int n){
    int a[n+1];
    a[0]=INT16_MAX;
    a[1]=0;
    for(int i=2;i<=10;i++){
        int dp1=INT16_MAX;
        int dp2=INT16_MAX;
        int dp3=INT16_MAX;
        dp1=a[i-1];
        if(i%2==0){
            dp2=a[i/2];
        }
        if(i%3==0){
            dp3=a[i/3];
        }
        a[i]=min(dp1,min(dp2,dp3))+1;

    }
    return a[n];
}
int main(){
    cout<<minsteps(2)<<endl;;
    cout<<minsteps(10)<<endl;
    return 0;
}