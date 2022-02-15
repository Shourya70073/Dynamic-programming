#include<iostream>
#include<string>
#include<climits>
using namespace std;
int lcs(string s,string t){
    int b[s.size()+1][t.size()+1];
    for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++){
            if(i==0 || j==0)
               b[i][j]=0;
        }
    }
    for(int i=1;i<=s.size();i++){
        for(int j=1;j<=t.size();j++){
            if(s[s.size()-1]==t[t.size()-1])
               b[i][j]=1+b[i-1][j-1];
            else
               b[i][j]=max(b[i-1][j],b[i][j-1]);
        }
    }
    return b[s.size()][t.size()];
}