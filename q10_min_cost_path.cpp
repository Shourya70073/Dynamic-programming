#include<iostream>
using namespace std;
int minn(int a[][3],int m,int n,int i,int j){
    if(i==m-1 && j==n-1)
       return a[i][j];
    int x=INT16_MAX;int y=INT16_MAX;int z=INT16_MAX;
    if(i<m-1)
     x=minn(a,m,n,i+1,j);
    if(j<n-1)
    y=minn(a,m,n,i,j+1);
    if(i<m-1 && j<n-1)
    z=minn(a,m,n,i+1,j+1);
    return (a[i][j]+min(x,min(y,z)));
}
int main(){
    int a[4][3]={{10,5,6},{7,15,9},{4,3,0},{1,2,4}};
    cout<<minn(a,4,3,0,0);
    return 0;
}