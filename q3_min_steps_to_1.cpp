#include<iostream>
using namespace std;
int min_steps_to_1(int n){
    if(n==1)
       return 0;
    int x;
    int y=INT16_MAX;
    int z=INT16_MAX;
    if(n%3==0)
      x=min_steps_to_1(n/3);
    if(n%2==0)
      y=min_steps_to_1(n/2);
    z=min_steps_to_1(n-1);
    return min(min(x,y),z)+1;
}
int main(){
    cout<<min_steps_to_1(7);
    return 0;
}