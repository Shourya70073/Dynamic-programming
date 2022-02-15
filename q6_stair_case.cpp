#include<iostream>
using namespace std;
int stair(int n){
    if(n==0){
        return 0;
    }
    if(n<0)
      return INT16_MAX;
    int x=stair(n-1);
    int y=stair(n-2);
    int z=stair(n-3);
    return min(x,min(y,z))+1;
}
int main(){
    cout<<stair(1)<<endl;
     cout<<stair(2)<<endl;;
      cout<<stair(3)<<endl;;
       cout<<stair(4)<<endl;;
    return 0;
}