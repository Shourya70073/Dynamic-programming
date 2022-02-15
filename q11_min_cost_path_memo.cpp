#include<iostream>
using namespace std;
int minn(int a[][3],int b[][3],int m,int n,int i,int j){
    if(i==m-1 && j==n-1)
       return a[i][j];
    int x=INT16_MAX;int y=INT16_MAX;int z=INT16_MAX;
    if(i<m-1){
           if (b[i+1][j]==-1)
                b[i+1][j]=minn(a,b,m,n,i+1,j);
            x=b[i+1][j];
    }
    
    if(j<n-1){
        if(b[i][j+1]==-1)
            b[i][j+1]=minn(a,b,m,n,i,j+1);
        y=b[i][j+1];
    }
      
    if(i<m-1 && j<n-1){
         if(b[i+1][j+1]==-1)
          b[i+1][j+1]=minn(a,b,m,n,i+1,j+1);
        z=b[i+1][j+1];
    }
     
    b[i][j]= (a[i][j]+min(x,min(y,z)));
    return b[i][j];
}
int main(){
    int a[4][3]={{10,5,6},{7,15,9},{4,3,0},{1,2,4}};
    int b[4][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
    cout<<minn(a,b,4,3,0,0);
    return 0;
}